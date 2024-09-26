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
/*int busca(dados aluno[], int n, int matBusca) // Int gasta menos mem�ria do que a struct dados, sendo mais indicada nesse caso.
{
	for(int i = 0; i < n; i++)
	{
		// Verifica��o da matr�cula a cada elemento do vetor com contador i.
		if (aluno[i].matricula == matBusca)
		{
		return i; // Main sabe qual a posi��o do vetor e colocar suas informa��es.	
		}
	}
	return -1; // Caso a matr�cula n�o exista na fun��o, o -1 � uma posi��o n�o existente.
}
*/

int busca_bin_aluno_mat(dados aluno[], int n, int matBusca)
{
	int inicio = 0;
	int fim = n-1; // Por causa que o vetor come�a no elemento 0.
	int meio = 0;
	//Come�a a repeti��o.
	while(inicio <= fim) //N�o sabemos quantas vezes ele repetir� e mesmo se vai encontrar, logo o while � melhor do que o for nesse caso.
		{
		    meio = (inicio + fim)/2; // Sempre arredonda para baixo, por exemplo 5/2 = 2,5 que vai ser 3� elemento[2].
			if(matBusca == aluno[meio].matricula)
			{
				//Fazendo a repeti��o, o meio achar� o elemento no vetor em algum momento, se este existir dentro do vetor.
				return meio; // Se a fun��o fosse struct, esta linha deveria ser : return aluno[meio]; Mas nesse caso � int, ent�o deve retornar valor inteiro.
			} 
			else
			{
				if(matBusca > aluno[meio].matricula)
				{
					inicio = meio + 1;
				}
				else if(matBusca < aluno[meio].matricula)
				{
					fim = meio - 1;
				}
			}
		}
		return -1;
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
	
	int resultado = busca_bin_aluno_mat(aluno, n, matBusca); // Retornando a fun��o busca para ter a posi��o i para resultado.
	
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