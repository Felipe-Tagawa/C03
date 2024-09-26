#include <iostream>
using namespace std;

void Bubble_Sort (int vetor[], int n)
{
	int i; // Declara a variável i para ser usada como contador no loop for interno
	int j; // Declara a variável j para ser usada como contador no loop for externo
	int aux = 0; // Declara a variável aux para ser usada na troca de elementos
	for(j = n - 1; j >=1; j--) // Loop for externo que percorre o vetor do último elemento até o segundo
	{
		for(i = 0; i < j; i++) // Loop for interno que percorre o vetor do primeiro elemento até o elemento j
		{
			if(vetor[i] > vetor[i + 1]) // Compara o elemento atual com o próximo elemento
			{
				aux = vetor[i]; // Se o elemento atual for maior que o próximo, armazena o valor do elemento atual na variável aux
				vetor[i] = vetor[i+1]; // Troca o valor do elemento atual pelo valor do próximo elemento
				vetor[i+1] = aux; // Troca o valor do próximo elemento pelo valor armazenado na variável aux
			}
		}
	}
} 

int main()
{
	int n;
	int vetor[100];
	int i = 0;
	
	cout << "Digite o numero de elementos que deseja ordenar: " << endl;
	cin >> n;
	
	cout << "Digite os valores: " << endl;
	for(i = 0; i < n; i++)
	{
		cin >> vetor[i];
	}
	
	Bubble_Sort(vetor, n);
	
	for (i = 0; i < n; i++)
		cout << vetor[i];
	
	return 0;
}