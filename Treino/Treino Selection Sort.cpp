#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    int valores[50];
    int pos_min = 0;
    int temp = 0;

    cout << "Escreva quantos valores para serem ordenados: " << endl;
    cin >> n;

	cout << "Escreva os valores que deseja ordenar: " << endl;
	for(i = 0; i < n; i++)
    {
        cin >> valores[i];
    }

    for(j = 0; j < n; j++)
    {
    	int min = 99999;
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

    // Mostrando o vetor ordenado:
    for(j = 0; j < n; j++)
	{
	cout << valores[j] << endl;
	}
    return 0;
}
 