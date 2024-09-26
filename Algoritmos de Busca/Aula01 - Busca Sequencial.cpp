// Busca que varre todos os elementos ou até achar o elemento procurado.
// Válido para estruturas sequenciais (vetores, matrizes, etc...)
// Problema : Tem que varrer tudo, mesmo se o elemento não for o último.

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
	int n; // número de alunos.
	
	cin >> n;
	
	aluno alunos[n];
	
	for(int i = 0; i < n; i++)
	{
		cin >> alunos[i].matricula;
		cin >> alunos[i].nome;
	}
	
	return 0;
}