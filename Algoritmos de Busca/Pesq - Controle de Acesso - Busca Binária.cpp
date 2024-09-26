#include <iostream>
#include <string>
using namespace std;

int busca_binaria(int valores[], int n, int id)
{
    int inicio = 0;
    int meio = 0;
    int fim = n-1;
    for(int i = 0; i < n; i++)
    {
        meio = (inicio + fim)/2;
        if (id == valores[meio])
        {
            return meio;
        }
        else
        {
            if(id > valores[meio])
            {
                inicio = meio + 1;
            }
            else
            {
                fim = meio -1;
            }
        }
    }
    return -1;
}

int main()
{

    int i = 0;
    int n = 0;
    int valores[20];
    int id;
    
    // Lendo os valores.
    cin >> valores[i];
    while(valores[i] != -1)
    {
        i++;
        cin >> valores[i];
    }
    
    n = i; // Valor a ser levado para a função.
    // Lendo o ID que deve ser socilitado para ver se tem acesso ou não.
    cin >> id;
    
    int resultado = busca_binaria(valores, n, id);
    
    if(resultado != -1)
    {
        cout << "Possui acesso" << endl;
    }
    else
    {   
        cout << "Nao possui acesso" << endl;
    }
}