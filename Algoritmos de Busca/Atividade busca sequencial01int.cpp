// Sabe-se que um aluno pode ser definido por seu nome, matr�cula e idade. Considere um vetor de N alunos.
// 1) Crie uma fun��o que receba o n�mero de matr�cula de um aluno e retorne suas informa��es.
// 2) Crie uma fun��o que receba o nome de um aluno e retorne suas informa��es.
// 3) Crie uma fun��o que receba um valor inteiro indicando a idade e retorne a quantidade de alunos que tem essa idade ou menos.
// Busca sequencial varre todos os valores do vetor (estruturas de repeti��o).

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
int busca(dados aluno[], int tamanho, int matBusca) // Int gasta menos mem�ria do que a struct dados, sendo mais indicada nesse caso.
{
	for(int i = 0; i < tamanho; i++)
	{
		// Verifica��o da matr�cula a cada elemento do vetor com contador i.
		if (aluno[i].matricula == matBusca)
		{
		return i; // Main sabe qual a posi��o do vetor e colocar suas informa��es.	
		}
	}
	return -1; // Caso a matr�cula n�o exista na fun��o, o -1 � uma posi��o n�o existente.
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
	matBusca = 6;
	
	int resultado = busca(aluno, n, matBusca); // Retornando a fun��o busca para ter a posi��o i para resultado.
	
	if(resultado != -1){
	cout << "Nome do aluno procurado: " << aluno[resultado].nome << endl;
	cout << "Matricula do aluno procurado: " << aluno[resultado].matricula << endl;
	cout << "Idade do aluno procurado: " << aluno[resultado].idade << endl;
	}
	else {
		cout << "Aluno nao encontrado"! << endl;
	}
	return 0;
}