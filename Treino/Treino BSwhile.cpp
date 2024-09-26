#include <iostream>
using namespace std;

void bubblesort(int valores[], int n)
{
	int aux, i, j;
	for(j = 0; j < n; j++)
	{
		for(i = 0; i < n-j-1; i++)
		{
			if(valores[i] > valores[i + 1])
			{
				aux = valores[i];
				valores[i] = valores[i+1];
				valores[i + 1] = aux;
			}
		}
	}
}

int main()
{
	int j, n;
	int valores[50];
	int i = 0;
	cin >> valores[i];
	while(valores[i] != 0)
	{
		i++;
		cin >> valores[i];
	}
	n = i;
	bubblesort(valores, n);
	
	for(i = 0; i < n; i++)
	{
		cout << valores[i] << endl;
	}
	return 0;
}