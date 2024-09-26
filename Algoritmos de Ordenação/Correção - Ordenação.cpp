#include <iostream>
using namespace std;

int main()
{
	
	int vetor = {3,7,2,9,5,1,4,8,6};
	int n = 9;
	int pos_min = 0;
	
	
	//selection sort
	for(int j = 0; j < (n-1); j++)// 8*(n-1) vezes + 4 unidades de tempo.
	{
		// Procurando o menor elemento de todos no vetor.
		int min = vetor[j]; // int min = 9999; 3*(n-1) unidades de tempo.
		pos_min = j; // 2 *(n-1) unidades de tempo.
		for(int i = j+1; i < n; i++)// 9*(n/2)(n-1), ele vai diminuindo pela metade o número de repetições((n-1), pior caso + 1, melhor caso)/2
		{
			if(vetor[i] < min)// 4*(n/2)*(n-1)
			{
			   	min = vetor[i];// 3*(n/2)*(n-1)
			   	pos_min = i; // 2*(n/2)*(n-1)
			}
	   	}
	}
	
	// trocando o elemento da primeira posição pelo menor.
	temp = vetor[j]; // 3(n-1)
	vetor[j] = min; // 3(n-1)
	vetor[pos_min] = temp;//3(n-1)
	
	return 0;
	//No modelo Ram : 9n^2 + 24n -28.
}
		// bubble sort
#include <iostream>
using namespace std;

int main()
{
	bool ordenado = true;
	for(int j = 0; j < (n-1); j++) // for(j = n - 1; j > 0; j--), 6*(n-1) + 6 unidades de tempo.
	{
		ordenado = true; // Sempre começar com true.
		for(int i = 0; i < n-j-1; i++) //for(i = 0; i < j; i++), (6*(n/2) + 6)*(n-1) unidades de tempo
		{
			// Verificando se os dois elementos adjascentes então na ordem correta.
			if(vetor[i] > vetor[i + 1]) // 6*(n/2)(n-1) unidades de tempo, trocando > pór <, a ordem fica decrescente.
			{
				//Trocando os elementos de posição.
			   temp = vetor[i]; // 3*(n/2)(n-1) unidades de tempo.
  	   			vetor[i] = vetor[i + 1]; // 5*(n/2)(n-1) unidades de tempo.
				vetor[i + 1] = temp; // 4*(n/2)(n-1) unidades de tempo.
				ordenado = false;	
			}
	   	}
	   	if(ordenado)
	   		break; // Parar para otimizar o algoritmo, para não entrar no for novamente após já estar ordenado.
	}
	return 0;
	// No Modelo Ram: 11n^2 + n -6
}

// Insertion Sort

int i, j, key;
for( j = 1; j < n; j++) // 1(j = 1) + 3(j < n) + 6*(n-1), de 1 até n = (n-1)
{
	key = vetor[j]; // 3*(n-1)
	i = j - 1; // i um valor antes de j e pode assumir valores negativos, para fazer todas as trocas possíveis. // 3*(n-1).
	while(i >= 0 && vetor[i] > key) // 7*(n-1)*(n/2) --> n/2 é o caso médio, que iniciar com 1 até n == 1+n/2 == n/2.
	{
		vetor[i+1] = vetor[i]; // O elemento posterior recebe o valor anterior, caso este valor seja maior do que a chave, que recebeu o elemento na posição posterior. // 5*(n-1)*(n/2) unidades de tempo
		i = i - 1; // decrementando i para fazer todas as inserções. // 3*(n-1)*(n/2)
	}
	vetor[i+1] = key; // Quando i for menor do que 0, esta linha roda e coloca o valor da chave no elemento que estava sem nada. // 4*(n-1) unidades de tempo.
	// A complexidade deste algorítmo no modelo Ram será de 7.5n^2 + 8.5n - 12, sendo melhor que o selection e o bubble sorts.
}