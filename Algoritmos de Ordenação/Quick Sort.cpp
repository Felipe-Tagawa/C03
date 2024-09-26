#include <iostream>
using namespace std;

int dividir(int valores[], int esq, int dir)
{
	int aux;
	int contador = esq;
	for(int i = esq + 1; i <= dir; i++)
	{
		if (valores[i] < valores[esq])
		{
			contador++;
			aux = valores[i];
			valores[i] = valores[contador];
			valores[contador] = aux;
		}
		aux = valores[esq];
		valores[esq] = valores[contador];
		valores[contador] = aux;
	}
	return contador;
}

void quicksort(int valores[], int esq, int dir)
{
	int pos;
	if(esq < dir) // Condição para ordenar.
	{
		pos = dividir(valores, esq, dir);
		quicksort(valores, esq, pos - 1);
		quicksort(valores,pos+1, dir);	
	}
}

int main()
{
	int valores[100];
	int n;
	
	// Lendo a quantidade de valores.
	cin >> n;
	
	// Lendo os valores.
	for(int i = 0; i < n ; i++)
	{
		cin >> valores[i];
	}
	
	quicksort(valores, 0, n-1);
	
	for(int i = 0; i < n ; i++)
	{
		cout << valores[i];
	}
	
	return 0;
}