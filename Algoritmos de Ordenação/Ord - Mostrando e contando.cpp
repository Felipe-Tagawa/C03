#include <iostream>
using namespace std;

void bubblesort(int valores[], int n) 
{
    int i, j, trab;
    bool troca;
    int contador = 0;

    for(j = 0; j < n-1; j++)
	{
        troca = false;
        for(i = 0; i < n-j-1; i++) 
		{
            if(valores[i] > valores[i+1]) 
			{
                trab = valores[i];
                cout << "New trab: " << trab << endl;
                valores[i] = valores[i+1];
                valores[i+1] = trab;
                troca = true;
                contador++;
            }
        }
    }
    cout << "Contador: " << contador << endl;
}

int main() {
    int n;
    cout << "Escreva o numero de valores a serem ordenados aqui: " << endl;
    cin >> n;
    int valores[n];
    // Pedindo para o usuário escrever os valores.
    cout << "Escreva aqui os valores: " << endl;
    
    // Escrevendo os valores a serem ordenados.
    for(int i = 0; i < n; i++) {
        cin >> valores[i];
    }

    bubblesort(valores, n);

    return 0;
}
