#include <iostream>
using namespace std;

void insertionsort(int valores[], int n)
{
	int i, j, key;
	for(j = 1; j < n; j++)
	{
		key = valores[j];
		i = j - 1;
		while(i >= 0 && valores[i] > key)
		{
			   valores[i + 1] = valores[i];	
			   i--;
		}
		valores [i + 1] = key;
	}
}

int main()
{
	int i = 0;
	int j;
	int valores[50];
	
	cin >> valores[i];
	while(valores[i] != 0)
	{
		i++;
		cin >> valores[i];
	}
	int n = i;
	insertionsort(valores, n);
	
	for(i = 0; i < n; i++)
	{
		cout << valores[i] << endl;
	}
	
	return 0;
}