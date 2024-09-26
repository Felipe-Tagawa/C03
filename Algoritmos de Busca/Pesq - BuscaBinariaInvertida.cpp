#include <iostream>
using namespace std;

int busca_binaria_inversa(int valores[], int n, int valor_procurado)
{
    int inicio = n -1;
    int fim = 0;
    int meio = 0;
    for(int i = 1; i < n; i++)
    {
        meio = (inicio + fim) / 2;
        if(valor_procurado == valores[meio])
        {
            return meio;
        }
        else
        {
            if(valor_procurado > valores[meio])
            {
                inicio = meio - 1;
            }
            else
            {
                fim = meio + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n = 0;
    int valores[100];
    int valor_procurado;
    
    // Lendo o número de valores a serem lidos.
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> valores[i];
    }
    
    cin >> valor_procurado;
    
    int resultado = busca_binaria_inversa(valores, n, valor_procurado);
    
    if(resultado != -1)
    {
        cout << valor_procurado << " encontrado na posicao " << resultado << endl;
        
    }
    else
    {
        cout << valor_procurado << " nao encontrado" << endl;
    }
    return 0;
}