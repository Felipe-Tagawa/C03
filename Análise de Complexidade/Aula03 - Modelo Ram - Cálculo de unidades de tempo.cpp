/*
int SequentialSearch(int vector[], int lenght, int key)

int pos = -1; //Declarar variáveis não conta como uma unidade de tempo, mas a atribuição pos = -1 gasta 1 unidade de tempo.
bool found = false; // Mais uma unidade de tempo.
int i = 0; // Mais uma unidade de tempo.

while(i < lenght && found == false) // 6 unidades de tempo no while. + 6 unidades para segunda repetição. + 6 unidades para 3° repetição. + 6 unidades para 4° repet. + 6 unidades para 5° repet.
	{
	if (vector[i] == key) // 4 unidades de tempo, acessar vector, i igualar e acessar key. +4 unidades de tempo para 2° repet.. + 4 unidades de tempo para 3° repet. + 4 unidades de tempo.
	{
		found = true; // 1 operação = 1 unidade de tempo.
		pos = i; // 2 unidades (acesso e atribuição).
	}
	else
	{
		i++; // 3 unidades de tempo. 3 unidades de tempo. 3 unidades de tempo.
	}
	
	return pos; // 1 unidade de tempo.
	}
	// No final 59 unidades de tempo.
*/

// Casos gerais :

/* 
n*6 + 6 no while.
n*4 no if.
n*3 no i++.
3 para primeiras atribuições do programa.
1 para return.
6n + 4n + 3n + 10 = 13n + 10 unidades de tempo.
*/