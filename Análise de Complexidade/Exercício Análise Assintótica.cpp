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
int busca(dados aluno[], int n, int matBusca) 
{
	for(int i = 0; i < n; i++)
	{
		if (aluno[i].matricula == matBusca) // f(n) = n, porque a repetição vai rodar n vezes, até encontrar o aluno procurado. 
		{
		return i; 	
		}
	}
	return -1; 
}


int busca_bin_aluno_mat(dados aluno[], int n, int matBusca) // f(n) = log(n) na base 2, porque a cada repetição, há uma divisão por 2 elementos, diminuindo os casos rapidamente.
{
	int inicio = 0;
	int fim = n-1; 
	int meio = 0;
	//Começa a repetição.
	while(inicio <= fim)
		{
		    meio = (inicio + fim)/2; 
			if(matBusca == aluno[meio].matricula)
			{
				
				return meio;
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
	
	int resultado = busca_bin_aluno_mat(aluno, n, matBusca); // Retornando a função busca para ter a posição i para resultado.
	
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