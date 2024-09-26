#include <iostream>
using namespace std;

int main()
{
	int i, j; 
	int temp; 
	int vetor[50]; 
	int n; 
	int pos_min = 0; // 1 unidade de tempo.
	
	cout << "Escreva o numero de elementos a serem ordenados." << endl; // 1 unidade de tempo.
	cin >> n; // 1 unidade de tempo.
	
	for(j = 0; j < n; j++) // 7 unidades de tempo*n vezes + 7.
	{
		int min = 9999; // 1 unidade de tempo * n vezes.
		cin >> vetor[j]; // 3 unidades de tempo * n vezes.
		for(i = j; i < n; i++) // 8 unidades de tempo*(n+1)/2 vezes.
			if(vetor[i] < min) // 4 unidades de tempo * (n+1)/2.
			{
				min = vetor[i]; // 3 unidades de tempo * (n+1)/2 vezes.
				pos_min = i; // 2 unidades de tempo * (n+1)/2 vezes.
			}
		temp = vetor[j]; // 3 unidades de tempo * n vezes.
		vetor[j] = min;  // 3 unidades de tempo *  n vezes
		vetor[pos_min] = temp; 	// 3 unidades de tempo *  n vezes
	}
	
	return 0;
	// Como há um for dentro do outro, a complexidade se dá por O(n^2) na análise assintótica.
	// No Modelo Ram, a complexidade deste algoritmo é de (17(n+1)/2)*n + 20n + 3 = (17n^2 + 37n)/2 + 3.
}

/* Usando while
#include <iostream>
using namespace std;

int main()
{
	int i;
	int j = 0;
	int temp; 
	int vetor[50]; 
	int n; 
	int pos_min = 0; // 1 unidade de tempo.
	
	cout << "Escreva o numero de elementos a serem ordenados." << endl; 
	cin >> n; 
	
	while(j < n)
	{
		int min = 9999;  
		cin >> vetor[j]; 
		i = j;
		while (i < n)
		{
			if(vetor[i] < min) 
			{
				min = vetor[i]; 
				pos_min = i; 
				
		  	}
		i++;
		}
		temp = vetor[j]; 
		vetor[j] = min;  
		vetor[pos_min] = temp; 
		j++;
	}
	
	return 0;
	// Como há um for dentro do outro, a complexidade se dá por O(n^2) na análise assintótica.
	// No Modelo Ram, a complexidade deste algoritmo é de (17(n+1)/2)*n + 20n + 3 = (17n^2 + 37n)/2 + 3.
}
*/

void Bubble_Sort (int vetor[], int n)
{
	int i, j;
	int aux = 0; // 1 unidade de tempo.
	for(j = n - 1; j > 0; j--) // 8 * n unidades de tempo.
	{
		for(i = 0; i < j; i++) // 7 * n^2 unidades de tempo.
		{
			if(vetor[i] > vetor[i + 1]) // 5 * n^2 unidades de tempo.
			{
				aux = vetor[i]; // 3 * n^2 unidades de tempo.
				vetor[i] = vetor[i+1]; // 5 * n^2 unidades de tempo.
				vetor[i+1] = aux; // 4 * n^2 unidades de tempo.
			}
		}
	}
	// A complexidade se dá por O(n^2) na análise assintótica.
	// No Modelo Ram, a complexidade deste algoritmo é de 17n^2 + 8n + 1.
} 

// Extra :

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
	int i, j; // Declarando os contadores.
	dados aux; // Declara a variável aux para ser usada na troca de elementos.
	for(j = n - 1; j >= 1; j--) // Loop for externo que percorre o vetor do último elemento até o segundo.
	{
		for(i = 0; i < j; i++) // Loop for interno que percorre o vetor do primeiro elemento até o elemento j.
		{
			if(aluno[i].matricula > aluno[i + 1].matricula) // Compara o elemento atual com o próximo elemento.
			{
				aux = aluno[i]; // Se o elemento atual for maior que o próximo, armazena os dados do elemento atual na variável aux.
				aluno[i] = aluno[i+1]; // Troca os dados do aluno atual pelos dados do próximo aluno.
				aluno[i+1] = aux; // Troca o valor do próximo elemento pelo valor armazenado na variável aux.
			}
		}
	}
}
/* Usando while ao invés de for para x elementos:
void Bubble_Sort (dados aluno[], int n)
{
	int i, j; // Declarando os contadores.
	dados aux; // Declara a variável aux para ser usada na troca de elementos.
	j = n - 1; // Inicializa o contador j.
	while(j >= 1) // Loop while externo que percorre o vetor do último elemento até o segundo.
	{
		i = 0; // Inicializa o contador i.
		while(i < j) // Loop while interno que percorre o vetor do primeiro elemento até o elemento j.
		{
			if(aluno[i].matricula > aluno[i + 1].matricula) // Compara o elemento atual com o próximo elemento.
			{
				aux = aluno[i]; // Se o elemento atual for maior que o próximo, armazena os dados do elemento atual na variável aux.
				aluno[i] = aluno[i+1]; // Troca os dados do aluno atual pelos dados do próximo aluno.
				aluno[i+1] = aux; // Troca o valor do próximo elemento pelo valor armazenado na variável aux
			}
			i++; // Incrementa o contador i.
		}
		j--; // Decrementa o contador j.
	}
}
*/

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
	int n; // Declara a variável do número de matrículas.
	int i = 0; // Declara e inicializa o contador.
	int matBusca; // Matrícula buscada.

	cout << "Digite o numero de matriculas: " << endl;
	// Lendo o número de matrículas.
	cin >> n;
	
	dados aluno[n];
	
	cout << "Digite matricula, nome e idade de cada aluno aqui: " << endl;
	for(i = 0; i < n; i++)
	{
		aluno[i] = cria_aluno(); 	
	}
	
	// Retornando o vetor de aluno e o número de matrículas a serem usados na função do Bubble Sort.
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