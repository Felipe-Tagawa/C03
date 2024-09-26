#include <iostream>
using namespace std;

int buscaSeq(int valores[], int n, int valorBusca)
{
	int aux = 0;
    for(int i = 0; i < n; i++)
    {
        if (valores[i] == valorBusca)
        {
            aux =1;
            return i;
        }
    }
    return -1;
}

int main()
{
    int i = 0; // contador.
    int n = 0; // número auxiliar.
    int valores[100]; // valores a serem lidos.
    int valorBusca; // valor a ser procurado.
    int aux = 0; // auxiliar
    
    cin >> valores[i];
    while (valores[i] != -1)
    {
    	i++;
        cin >> valores[i];
    }
    
    cin >> valorBusca;
    
    n = i;
    
   int resultado = buscaSeq(valores, n, valorBusca);
   
    if(aux == 1)
    {
        cout << valorBusca << " encontrado na posicao " << resultado << endl;
    }
    else
    {
        cout << valorBusca << " nao encontrado" << endl;
    }
    
    return 0;
}