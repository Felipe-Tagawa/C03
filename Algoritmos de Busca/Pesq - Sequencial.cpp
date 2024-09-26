#include <iostream>
using namespace std;

int main()
{
    int i = 0; // contador.
    int n = 0; // número auxiliar.
    int valores[100]; // valores a serem lidos.
    int x; // valor a ser procurado.
    int pos = 0; // posição do valor, se estiver no vetor.
    bool result;
    
    cin >> valores[i];
    while (valores[i] != -1)
    {
    	i++;
        cin >> valores[i];
    }
    
    cin >> x;
    
    n = i;
    
    for (i = 0; i < n; i++)
    {
        if (x == valores[i])
        {
            pos = i;
            result = true;
        }
    }
    if(true)
    {
        cout << x << " encontrado na posicao " << pos << endl;
    }
    else
    {
        cout << x << " nao encontrado" << endl;
    }
    
    return 0;
}