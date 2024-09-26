#include <iostream>
using namespace std;

// Usando a função da questão interior de resto de divisão.
int hash_aux(int k, int m) {
    int result = k % m;
    if (result < 0) {
        result = result + m;
    }
    return result;
}

// Função que vai retornar vários valores referentes à sondagem linear.
int hash1(int k, int i, int m) {
    return (hash_aux(k, m) + i) % m;
}

int main() {
    int k, m;
    // Lendo a chave e o tamanho da tabela hash.
    cin >> k >> m;
    
    // Mostrando o resultado da sondagem linear.
    for (int i = 0; i < m; i++) {
        cout << hash1(k, i, m) << " ";
    }
    return 0;
}