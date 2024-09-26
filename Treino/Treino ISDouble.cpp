#include <iostream>
#include <iomanip>
using namespace std;

void insetionsort(double valores[], int n)
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
		valores[i + 1] = key;
	}
}

int main()
{
	double valores[50];
	int i = 0;
	int n;
	
	cin >> valores[i];
	while(valores[i] != -1)
	{
		i++;
		cin >> valores[i];
	}
	n = i;
	insetionsort(valores, n);
	
	cout << fixed << setprecision(2);
	for(i = 0; i < n; i++)
	{
		cout << valores[i] << endl;
	}
	
	return 0;
}