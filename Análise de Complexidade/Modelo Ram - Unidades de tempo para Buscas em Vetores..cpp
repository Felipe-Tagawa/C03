int busca_seq_aluno_mat(aluno alunos[], int n, int mat){ // Como declarar vari�veis n�o conta, aqui n�o temos unidades de tempo gastas.
	   for(int i=0; i<n; i++){ // 1 unidade de tempo para a atribui��o, 1 para i++ e mais uma para i < n.
		   if(mat == alunos[i].matricula){ // O if rodar� v�rias vezes at� a �ltima matr�cula, cada vez que � rodado, +1 unidade de tempo.
			   return i; // 1 unidade de tempo quando if for verdadeiro.
		   }
	   }
	   return -1; // 1 unidade de tempo se caso n�o achar o aluno pela matr�cula.	
}
// Logo, s�o gastas 3n(for) + n(if) + 2(returns) = 4n + 2 unidades de tempo.

int busca_bin_aluno_mat(aluno alunos[], int n, int mat){
	int inicio = 0; // 1 unidade de tempo para atribui��o.
	int fim = n - 1; // 2 unidades de tempo -- acesso de mem�ria e atribui��o.
	int meio = 0; // 1 unidade de tempo para atribui��o.
	//come�a a repeti��o
	while(inicio <= fim) // 2 unidades de tempo * n repeti��es.
	{
		meio = (inicio+fim)/2; // 2 unidades de tempo * n repeti��es, 1 para atribui��o e 1 para acesso de mem�ria.
		if(mat == alunos[meio].matricula){ // n unidades de tempo.
			return meio; // 1 unidade de tempo.		
		} else {
			if(mat > alunos[meio].matricula){ // n unidades de tempo.
				inicio = meio + 1; // 2 unidades de tempo * n repeti��es.
			} else {
				fim = meio - 1; // 2 unidades de tempo * n repeti��es.
			}
		}
	}
	return -1; // 1 unidade de tempo.
}

// Logo, a quantidade de unidades de tempo para esta fun��o � 10n + 4 + 1 + 1 = 10n + 6 unidades de tempo.
// Mas � bom salientar que cada exemplo � �nico e a diferen�a entre as duas fun��es � apenas te�rica, tendo em vista que a busca sequencial pode ter muitas repeti��es, ultrapassando as unidades de tempo da busca bin�ria.
