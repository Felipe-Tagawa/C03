#include <iostream>
using namespace std;
long long int fib[9999];
long long int fibonacci (int n)
{
	if(n <= 1) // n não pode ser negativo, pois a sequência começa no zero, sendo o if sendo sempre necessário para quebrar chamar infinitamente.
	{
		return 1ll; // A parada é necessária para cada função recursiva. 1 éle éle.
	}
	if(fib[n] != -1ll)
	{
		return fib[n]; // Se o valor já foi calculado, ele não será calculado novamente, gastando menos memória, o vetor global só é usado para gastar menos memória.
	}
	fib[n] = fibonacci(n-1) + fibonacci(n-2);
	return fib[n];
}

int main()
{
	for(int i = 0; i < 9999; i++)
	{
		   fib[i] = -1ll;	 // Igual a -1 de como se ele não tivesse calculado.
	}
	cout << fibonacci(355); // Ler qual Fibonacci quiser.
	
	return 0;
}