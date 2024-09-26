// Busca que varre todos os elementos ou at� achar o elemento procurado.
// V�lido para estruturas sequenciais (vetores, matrizes, etc...)
// Problema : Tem que varrer tudo, mesmo se o elemento n�o for o �ltimo.

#include <iostream>
#include <string>
using namespace std;

struct aluno
{
	int matricula;
	string nome[45];
};

int main()
{
	int n; // n�mero de alunos.
	
	cin >> n;
	
	aluno alunos[n];
	
	for(int i = 0; i < n; i++)
	{
		cin >> alunos[i].matricula;
		cin >> alunos[i].nome;
	}
	
	return 0;
}