#include <iostream>
using namespace std;

void insertionsort(int valores[], int n)
{
	int i, j, key;
	for(j = 1; j < n; j++)
	{
		key = valores[j];
		i = j - 1;
		while(i >= 0 && valores[i] > key) // valores na posição anterior a j(que é i, pois i = j-1), maiores do que a chave, esse valor maior entra em i+1 que é j.
		{
		valores[i + 1] = valores[i];// i+1 é j, pois i = j -1 antes.
		i = i - 1;	
		}
		valores[i+1] = key;
	}
}

int main()
{
	int i = 0;
	int n;
	int valores[50];
	
	cout << "Escreva o numero de valores a serem ordenados aqui: " << endl;
	cin >> n;
	
	cout << "Escreva aqui os valores: " << endl;
	for(i = 0; i < n; i++)
	{
		cin >> valores[i];
	}
	
	insertionsort(valores, n);
	
	for(i = 0; i < n; i++)
	{
		cout << valores[i] << endl;
	}
	
	return 0;
}