int busca_seq_aluno_mat(aluno alunos[], int n, int mat){ // Como declarar variáveis não conta, aqui não temos unidades de tempo gastas.
	   for(int i=0; i<n; i++){ // 1 unidade de tempo para a atribuição, 1 para i++ e mais uma para i < n.
		   if(mat == alunos[i].matricula){ // O if rodará várias vezes até a última matrícula, cada vez que é rodado, +1 unidade de tempo.
			   return i; // 1 unidade de tempo quando if for verdadeiro.
		   }
	   }
	   return -1; // 1 unidade de tempo se caso não achar o aluno pela matrícula.	
}
// Logo, são gastas 3n(for) + n(if) + 2(returns) = 4n + 2 unidades de tempo.

int busca_bin_aluno_mat(aluno alunos[], int n, int mat){
	int inicio = 0; // 1 unidade de tempo para atribuição.
	int fim = n - 1; // 2 unidades de tempo -- acesso de memória e atribuição.
	int meio = 0; // 1 unidade de tempo para atribuição.
	//começa a repetição
	while(inicio <= fim) // 2 unidades de tempo * n repetições.
	{
		meio = (inicio+fim)/2; // 2 unidades de tempo * n repetições, 1 para atribuição e 1 para acesso de memória.
		if(mat == alunos[meio].matricula){ // n unidades de tempo.
			return meio; // 1 unidade de tempo.		
		} else {
			if(mat > alunos[meio].matricula){ // n unidades de tempo.
				inicio = meio + 1; // 2 unidades de tempo * n repetições.
			} else {
				fim = meio - 1; // 2 unidades de tempo * n repetições.
			}
		}
	}
	return -1; // 1 unidade de tempo.
}

// Logo, a quantidade de unidades de tempo para esta função é 10n + 4 + 1 + 1 = 10n + 6 unidades de tempo.
// Mas é bom salientar que cada exemplo é único e a diferença entre as duas funções é apenas teórica, tendo em vista que a busca sequencial pode ter muitas repetições, ultrapassando as unidades de tempo da busca binária.
