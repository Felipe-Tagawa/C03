#include <iostream>
using namespace std;

void bubblesort(int valores[], int n)
{
	int i, j, aux;
	for(j = 0; j < (n-1); j++)
	{
		for(i = 0; i < n-j-1; i++)
		{
			if(valores[i] > valores[i+1])
			{
				aux = valores[i];
				valores[i] = valores[i + 1];
				valores[i + 1] = aux;
			}
		}
	}
}

int main()
{
	int valores[50];
	int n;
	
	cout << "Escreva aqui quantos valores a serem ordenados: " << endl;
	cin >> n;
	
	cout << "Escreva os valores a serem ordenados aqui: " << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> valores[i];
	}
	
	bubblesort(valores, n);
	
	// Mostrando o vetor ordenado:
    for(int i = 0; i < n; i++)
	{
	cout << valores[i] << endl;
	}
	
	return 0;
}