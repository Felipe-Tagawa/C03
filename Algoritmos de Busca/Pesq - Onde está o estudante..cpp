#include <iostream>
using namespace std;

int buscamat (int valores[], int n, int matBusca)
{
	int inicio = 0;
	int meio;
	int fim = n - 1;
	while(inicio <= fim)
	{
		meio = (inicio + fim) / 2;
		if(matBusca == valores[meio])
		{
			return meio;
		}
		else
		{
			if(matBusca > valores[meio])
			{
				inicio = meio + 1;
			}
			else
			{
				fim = meio - 1;
			}
		}
	}
	return -1;
}

int main()
{
	int i;
	int n;
	int valores[100];
	int matBusca;
	
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> valores[i];
	}
	cin >> matBusca;
	
	int result = buscamat(valores, n, matBusca); // Result armazena a posição do elemento correto no vetor.
	
	if(result != -1)
	{
		cout << "Corredor " << result << endl;
	}
	else
	{
		cout << "Nao localizado" << endl;
	}
	
	
	
	return 0;
}