#include <iostream>
using namespace std;

int main()
{
	int i, j; // vari�veis.
	int temp; // vari�vel tempor�ria.
	int vetor[50]; // vetor com os valores a serem ordenados.
	int n; // n�mero de valores.
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
				min = vetor[i]; // Colocar o menor valor do vetor na vari�vel min.
				pos_min = i; // colocar a posi��o i na posi��o do m�nimo.
			}
		temp = vetor[j]; // Colocar o valor numa vari�vel tempor�ria para n�o perder o valor que estava na posi��o anteriormente.
		vetor[j] = min; // O valor m�nimo ser� colocado na primeira posi��o do vetor, depois na segunda e assim por diante.
		vetor[pos_min] = temp; // Onde o j assumir� todas as posi��es, em que temp ter� cada valor ordenado em seu lugar correto.	
	}
	
	return 0;
}

//Bubble Sort : A ideia � percorrer o vetor v�rias vezes, a cada passagem fazendo flutuar o maior elemento de 2 em 2.

void Bubble_Sort (int vetor[], int n)
{
	int i; // Declara a vari�vel i para ser usada como contador no loop for interno
	int j; // Declara a vari�vel j para ser usada como contador no loop for externo
	int aux = 0; // Declara a vari�vel aux para ser usada na troca de elementos
	for(j = n - 1; j >=1; j--) // Loop for externo que percorre o vetor do �ltimo elemento at� o segundo
	{
		for(i = 0; i < j; i++) // Loop for interno que percorre o vetor do primeiro elemento at� o elemento j
		{
			if(vetor[i] > vetor[i + 1]) // Compara o elemento atual com o pr�ximo elemento
			{
				aux = vetor[i]; // Se o elemento atual for maior que o pr�ximo, armazena o valor do elemento atual na vari�vel aux
				vetor[i] = vetor[i+1]; // Troca o valor do elemento atual pelo valor do pr�ximo elemento
				vetor[i+1] = aux; // Troca o valor do pr�ximo elemento pelo valor armazenado na vari�vel aux
			}
		}
	}
} 