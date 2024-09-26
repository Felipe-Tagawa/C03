#include <iostream>
using namespace std;
long long int fib[9999];
long long int fibonacci (int n)
{
	if(n <= 1) // n n�o pode ser negativo, pois a sequ�ncia come�a no zero, sendo o if sendo sempre necess�rio para quebrar chamar infinitamente.
	{
		return 1ll; // A parada � necess�ria para cada fun��o recursiva. 1 �le �le.
	}
	if(fib[n] != -1ll)
	{
		return fib[n]; // Se o valor j� foi calculado, ele n�o ser� calculado novamente, gastando menos mem�ria, o vetor global s� � usado para gastar menos mem�ria.
	}
	fib[n] = fibonacci(n-1) + fibonacci(n-2);
	return fib[n];
}

int main()
{
	for(int i = 0; i < 9999; i++)
	{
		   fib[i] = -1ll;	 // Igual a -1 de como se ele n�o tivesse calculado.
	}
	cout << fibonacci(355); // Ler qual Fibonacci quiser.
	
	return 0;
}