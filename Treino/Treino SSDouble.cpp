#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i = 0;
	int j;
	double temp;
	int pos_min = 0;
	double valores[50];
	
	cin >> valores[i];
	while(valores[i] != 0)
	{
		i++;
		cin >> valores[i];
	}
	
	int n = i;
	
	for(j = 0; j < n; j++)
	{
		double min = 9999;
		pos_min = j;
		for(i = j; i < n; i++)
		{
			if(valores[i] < min)
			{
				min = valores[i];
				pos_min = i;
			}
		}
		temp = valores[j];
		valores[j] = min;
		valores[pos_min] = temp;
	}
	
	cout << fixed << setprecision(2);
	for(i = 0; i < n; i++)
	{
		cout << valores[i] << endl;
	}
	return 0;
}