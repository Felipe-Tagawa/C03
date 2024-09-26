#include <iostream>
#include <cstring>
using namespace std;

struct dados
{
 char nome[100];
 string curso;
 int matricula;
 
};

// Função criada para ler os dados dos alunos.
dados cria_aluno()
{
    dados aluno;
    
    cin.ignore();// Pulando a quebra de linha.
    cin.getline(aluno.nome, 100);
    cin >> aluno.curso;
    cin >> aluno.matricula;
    
    return aluno;
}
int busca_sequencial_aluno(dados aluno[], int n, char nomeBusca[])    
{
    for(int i = 0; i < n; i++)
    {
        // Comparando o nome do aluno com aquele buscado.
        if (strcmp(aluno[i].nome, nomeBusca) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int i = 0;
    int n = 0;
    char nomeBusca[100];
    
    // Lendo o número de alunos.
    cin >> n;
    
    dados aluno[n];
    
    for(i = 0; i < n; i++)
    {
        aluno[i] = cria_aluno();
    }
    // lendo o nome do aluno buscado.
    cin.ignore();
    cin.getline(nomeBusca, 100);
    int resultado = busca_sequencial_aluno(aluno, n, nomeBusca);
    
    if (resultado != -1)
    {
        cout << aluno[resultado].nome << endl;
        cout << aluno[resultado].curso << endl;
        cout << aluno[resultado].matricula << endl;
    }
    else
    {
        cout << "Aluno nao localizado" << endl;
    }
    
    
    return 0;
}