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
	cout << "Escreva a matricula: " << endl;
	cin >> aluno.matricula;
	cout << "Escreva o nome: " << endl;
	cin >> aluno.nome;
	cout << "Escreva a idade: " << endl;
	cin >> aluno.idade;
	return aluno;
}
int conta_alunos(dados aluno[], int n, int idade) {
  int menos = 0;
  for (int i = 0; i < n; i++) {
    if (aluno[i].idade <= idade) {
      menos++;
    }
  }
  return menos;
}	
int main()
{
	int i;
	int n;
	int idade;
	
	cout << "Escreva quantos alunos a serem cadastrados." << endl;
	cin >> n;
	
	dados aluno[n];
	
	for(i = 0; i < n; i++)
	{
		aluno[i] = cria_aluno();
	}
	
	cout << "Qual a idade a ser considerada? " << endl;
	cin >> idade;
	cout << "O numero de aluno(s) com a idade " << idade << " ou menos eh: " << conta_alunos(aluno, n, idade) << endl;

	
	
	return 0;	
}
	