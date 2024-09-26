int busca(dados aluno[], int n, int matBusca) // Int gasta menos mem�ria do que a struct dados, sendo mais indicada nesse caso.
{
	for(int i = 0; i < n; i++) // 1(i = 0) + 3n + 3(i < n) + 3n(i++) --> 6n + 4
	{
		// Verifica��o da matr�cula a cada elemento do vetor com contador i.
		if (aluno[i].matricula == matBusca) // 4n --> 6n + 4 + 4n = 10n + 4(10n + 6 se considerar os returns) � a an�lise do Modelo Ram e O(n) na an�lise assint�tica.
		{
		return i; // Main sabe qual a posi��o do vetor e colocar suas informa��es.	
		}
	}
	return -1; // Caso a matr�cula n�o exista na fun��o, o -1 � uma posi��o n�o existente.
}


int busca_bin_aluno_mat(dados aluno[], int n, int matBusca)
{
	int inicio = 0; // 1 unidade de tempo
	int fim = n-1; // 3 unidades de tempo 
	int meio = 0; // 1 unidade de tempo
	//Come�a a repeti��o.
	while(inicio <= fim) // 3log(n) + 3
		{
		    meio = (inicio + fim)/2; // 5log(n)
			if(matBusca == aluno[meio].matricula) // 4log(n)
			{
				
				return meio; 
			} 
			else
			{
				if(matBusca > aluno[meio].matricula) // 3log(n) para os dois if abaixo pois, 1/2*3 + 1/2*3 = 3, 1/2 porque ele vai cair metade para cada if.
				{
					inicio = meio + 1; // crescendo de forma exponencial(log n)
				}
				else if(matBusca < aluno[meio].matricula)
				{
					fim = meio - 1; // decrescendo de forma exponencial(log n)
				}
			}
		}
		return -1;
		// 19log(n) + 8 ou O(log n) para assint�tica, que gasta muito menos unidades de tempo do que a sequencial.
	}

	int conta_alunos(dados aluno[], int n, int idade) {
  int menos = 0; // 1 unidade de tempo
  for (int i = 0; i < n; i++) { // 1 + 3n + 3 + 3n = 6n + 4 unidades de tempo
    if (aluno[i].idade <= idade) { // 4n unidades de tempo
      menos++; // 3n unidades de tempo
    }
  }
  return menos;
  // Resultados : 10n + 5(melhor caso, nunca entrar no menos++) e 13n + 5(pior caso) unidades de tempo no Modelo RAM e O(n) na assint�tica para ambos os casos.
}	
int main()
{
	int n;
	int i;
	int matBusca;
	
	
	cin >> n;
	
	dados aluno[n];
	
	for(i = 0;i < n ;i++)
	{
		aluno[i] = cria_aluno();
	}
	matBusca = 6;
	
	int resultado = busca_bin_aluno_mat(aluno, n, matBusca); // Retornando a fun��o busca para ter a posi��o i para resultado.
	
	if(resultado != -1){
	cout << "Nome do aluno procurado: " << aluno[resultado].nome << endl;
	cout << "Matricula do aluno procurado: " << aluno[resultado].matricula << endl;
	cout << "Idade do aluno procurado: " << aluno[resultado].idade << endl;
	}
	else {
		cout << "Aluno nao encontrado"! << endl;
	}
	return 0;
}