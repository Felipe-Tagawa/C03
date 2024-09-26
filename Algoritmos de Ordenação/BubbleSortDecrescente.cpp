#include <iostream>
#include <iomanip>
using namespace std;

void bubblesort(double valores[], int n)
{
	int i, j, aux;
	for(j = 0; j < n-1; j++)
	{
		for(i = 0; i < n-j-1; i++)
		{
			if(valores[i] < valores[i+1]) // Apenas trocar > por <.
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
	int n;
	int i = 0;
	double valores[50];
	
	cin >> valores[i];
	while(valores[i] != -1)
	{
		i++;
		cin >> valores[i];
	}
	n = i;
	bubblesort(valores, n);
	
	cout << fixed << setprecision(2);
	for(i = 0; i < n; i++)
	{
		cout << valores[i] << endl;
	}
	
	return 0;
}