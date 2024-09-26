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
	
	// Lendo os dados dos alunos.
	dados aluno;
	cin >> aluno.matricula;
	cin >> aluno.nome;
	cin >> aluno.idade;
	return aluno;
}

void Bubble_Sort (dados aluno[], int n)
{
	int i; // Declara a variável i para ser usada como contador no loop for interno
	int j; // Declara a variável j para ser usada como contador no loop for externo
	dados aux; // Declara a variável aux para ser usada na troca de elementos
	for(j = n - 1; j >= 1; j--) // Loop for externo que percorre o vetor do último elemento até o segundo
	{
		for(i = 0; i < j; i++) // Loop for interno que percorre o vetor do primeiro elemento até o elemento j
		{
			if(aluno[i].matricula > aluno[i + 1].matricula) // Compara o elemento atual com o próximo elemento
			{
				aux = aluno[i]; // Se o elemento atual for maior que o próximo, armazena o valor do elemento atual na variável aux
				aluno[i] = aluno[i+1]; // Troca o valor do elemento atual pelo valor do próximo elemento
				aluno[i+1] = aux; // Troca o valor do próximo elemento pelo valor armazenado na variável aux
			}
		}
	}
} 

int busca_bimat(dados aluno[], int n, int matBusca)
{
	int inicio = 0;
	int meio = 0;
	int fim = n - 1;
	while (inicio <= fim)
	{
		meio = (inicio + fim)/2;
		if(aluno[meio].matricula == matBusca)
		{
			return meio;
		}
		else
		{
			if (aluno[meio].matricula > matBusca)
			{
				inicio = meio + 1;
			}
			else
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
	int i = 0;
	int matBusca;
	
	cout << "Digite o numero de matriculas: " << endl;
	cin >> n;
	
	dados aluno[n];
	
	cout << "Digite matricula, nome e idade de cada aluno aqui: " << endl;
	for(i = 0; i < n; i++)
	{
		aluno[i] = cria_aluno(); 	
	}
	
	Bubble_Sort(aluno, n);
	
	
	cout << "Leia a matricula buscada: " << endl;
	cin >> matBusca;
	int resultado = busca_bimat(aluno, n, matBusca);
	
	// Mostrando os dados do aluno com a matrícula procurada.
	cout << aluno[resultado].nome << endl;
	cout << aluno[resultado].matricula << endl;
	cout << aluno[resultado].idade << endl;
	
	return 0;
}