// Sabe-se que um aluno pode ser definido por seu nome, matrícula e idade. Considere um vetor de N alunos.
// 1) Crie uma função que receba o número de matrícula de um aluno e retorne suas informações.
// 2) Crie uma função que receba o nome de um aluno e retorne suas informações.
// 3) Crie uma função que receba um valor inteiro indicando a idade e retorne a quantidade de alunos que tem essa idade ou menos.

#include <iostream>
#include <string>
using namespace std;

struct dados
{
	   int matricula;
	   string nome;
	   int idade;
	
};

dados cria_aluno()
{
	dados aluno;	
	cin >> aluno.matricula;
	cin >> aluno.nome;
	cin >> aluno.idade;
	return aluno;
}
dados busca(dados aluno[], int tamanho, int matBusca)
{
	for(int i = 0; i < tamanho; i++)
	{
		if (aluno[i].matricula == matBusca)
		return aluno[i];	
	}
}

int main()
{
	int n;
	int i;
	int matBusca;
	
	
	cin >> n;
	
	dados aluno[n];
	
	for(i = 0;i < n ;i++)
	{
		aluno[i] = cria_aluno();
	}
	cin >> matBusca;
	
	dados aluno_procurado = busca(aluno, n, matBusca);
	
	cout << "Nome do aluno procurado: " << aluno_procurado.nome << endl;
	cout << "Matricula do aluno procurado: " << aluno_procurado.matricula << endl;
	cout << "Idade do aluno procurado: " << aluno_procurado.idade << endl;
	
	return 0;
}