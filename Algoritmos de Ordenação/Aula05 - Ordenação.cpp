#include <iostream>
using namespace std;

int main()
{
	int i, j; // variáveis.
	int temp; // variável temporária.
	int vetor[50]; // vetor com os valores a serem ordenados.
	int n; // número de valores.
	int pos_min = 0;
	
	cout << "Escreva o numero de elementos a serem ordenados." << endl;
	cin >> n;
	
	for(j = 0; j < n; j++)
	{
		int min = 9999;
		cout << "Escreva os n valores aqui: " << endl;
		cin >> vetor[j];
		for(i = j; i < n; i++)
			if(vetor[i] < min)
			{
				min = vetor[i]; // Colocar o menor valor do vetor na variável min.
				pos_min = i; // colocar a posição i na posição do mínimo.
			}
		temp = vetor[j]; // Colocar o valor numa variável temporária para não perder o valor que estava na posição anteriormente.
		vetor[j] = min; // O valor mínimo será colocado na primeira posição do vetor, depois na segunda e assim por diante.
		vetor[pos_min] = temp; // Onde o j assumirá todas as posições, em que temp terá cada valor ordenado em seu lugar correto.	
	}
	
	return 0;
}

//Bubble Sort : A ideia é percorrer o vetor várias vezes, a cada passagem fazendo flutuar o maior elemento de 2 em 2.

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