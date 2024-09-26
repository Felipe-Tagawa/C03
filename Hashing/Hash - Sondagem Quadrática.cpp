#include <iostream>
using namespace std;

// Usando a fun��o novamente pedida para este exerc�cio.
int hash_aux(int k, int m) {
    int result = k % m;
    if (result < 0) {
        result = result + m;
    }
    return result;
}

// Implementando a chamada da fun��o auxiliar.
int hash2(int k, int i, int m, int c1, int c2)
{
    return ((hash_aux(k, m) + c1*i + c2*i*i  )% m);
}

int main()
{
    int k, m, c1, c2, i;
    // Lendo as vari�veis.
    cin >> k >> m >> c1 >> c2;
    
    // Mostrando os valores pedidos.
    for(i = 0; i < m; i++)
    {
       cout << hash2(k, i, m, c1, c2) << " "; 
    }
    return 0;
}