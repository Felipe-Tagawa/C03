// Como as matr�culas est�o ordenadas, � a �nica em que a busca bin�ria � mais eficiente do que a busca sequencial.
// No caso do nome e da idade, est�o desordenados, sendo menos eficiente o m�todo da busca bin�ria, sendo a busca sequencial melhor, nestes casos.

#include <iostream>
#include <string>
using namespace std;

struct dados
{
	int matricula;
	string nome;
	int idade;
};

// Fun��o que cria um aluno.
dados cria_aluno()
{
	dados aluno;
	cout << "Escreva a matricula: " << endl;
	cin >> aluno.matricula;
	cout << "Escreva o nome: " << endl;
	cin >> aluno.nome;
	cout << "Escreva a idade: " << endl;
	cin >> aluno.idade;
	return aluno;
}
// Criando uma fun��o para fazer a busca do aluno procurado.
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
	int n; // N�mero de alunos
	int matricula; // Matr�cula buscada.
	
	// Lendo o n�mero de alunos.
	cin >> n;	
	
	// Buscando dados de n alunos.
	dados aluno[n];
	
	for(i = 0;i < n ;i++)
	{
		aluno[i] = cria_aluno();
	}
	
	// Lendo a matr�cula procurada.
	cin >> matricula;
	
	dados aluno_procurado = busca(aluno, n, matricula);
	
	// Mostrando os dados do aluno a partir da matr�cula.
	cout << "Nome do aluno procurado: " << aluno_procurado.nome << endl;
	cout << "Matricula do aluno procurado: " << aluno_procurado.matricula << endl;
	cout << "Idade do aluno procurado: " << aluno_procurado.idade << endl;
	
	return 0;
}

	

