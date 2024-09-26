#include <iostream>
using namespace std;

int h1(int k, int m)
{
    int result = k % m;
    if(result < 0)
    {
        result = result + m;
    }
    return result;
}

int h2(int k, int m)
{
    int result2 = 1 + (k % (m - 1));
     if(result2 < 0)
    {
        result2 = result2 + m;
    }
    return result2;
}
int dhash(int k, int m, int i)
{
    return ((h1(k,m) + i* h2(k,m)) % m);
}

int main()
{
    int k, i, m;
    // Lendo os valores da chave e do tamanho da tabela hash.
    cin >> k >> m;
    
    // Mostrando os valores do double hashing.
    for(i = 0; i < m; i++)
    {
        cout << dhash(k, m, i) << " ";
    }
    return 0;
}