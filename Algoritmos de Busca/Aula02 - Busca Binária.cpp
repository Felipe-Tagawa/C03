// Necessidade de ordenação.
// Mais efetiva que a busca sequencial.
// Criação de auxiliares (início e fim), fazer a média.

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
dados busca(dados aluno[], int n, int matricula)
{
	int inicio = 0;
	int metade;
	int fim = n-1;
	for(int i = 0; i < n; i++)
	{
		metade = (inicio + fim)/2;
		if (matricula < aluno[metade].matricula)
		{
			fim = metade - 1;
		}
		else if (matricula > aluno[metade].matricula)
		{
			inicio = metade + 1;
		}
	}
	return aluno[metade];
}
int main()
{
	int i; // Contador
	int n; // Número de alunos
	int matricula; // Matrícula buscada.
	
	// Lendo o número de alunos.
	cin >> n;	
	
	// Buscando dados de n alunos.
	dados aluno[n];
	
	for(i = 0;i < n ;i++)
	{
		aluno[i] = cria_aluno();
	}
	
	// Lendo a matrícula procurada.
	cin >> matricula;
	
	dados aluno_procurado = busca(aluno, n, matricula);
	
	// Mostrando os dados do aluno a partir da matrícula.
	cout << "Nome do aluno procurado: " << aluno_procurado.nome << endl;
	cout << "Matricula do aluno procurado: " << aluno_procurado.matricula << endl;
	cout << "Idade do aluno procurado: " << aluno_procurado.idade << endl;
	
	return 0;
}

	

