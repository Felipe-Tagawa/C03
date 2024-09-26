#include <iostream>
using namespace std;

void bubblesort(int valores[], int n)
{
	int i, j;
	int aux = 0;
	for(j = n - 1; j >= 1; j--)
	{
		for(i = 0; i < j; i++)
		{
			if(valores[i] > valores[i + 1])
			{
				aux = valores[i];
				valores[i] = valores [i + 1];
				valores[i + 1] = aux;
			}
		}
	}
}

int main()
{
	int n;
	int i = 0;
	int valores[50];
	
	cout << "Escreva o número de valores: " << endl;
	cin >> n;
	
	for(i = 0; i < n; i++)
	{
		cin >> valores[i];
	}
	
		bubblesort(valores, n);
	
		for(i = 0; i < n; i++)
		cout << valores[i] << endl;
	
	
	return 0;
}