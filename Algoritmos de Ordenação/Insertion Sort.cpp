void insertionSort(int vetor[], int n) 
{ 
   int i, aux, j; 
   for (j = 1; j < n; j++) // 7*n + 7 unidades de tempo
   { 
       aux = vetor[j]; //3*n unidades de tempo.
       i = j-1; // 3*n unidades de tempo.
       while (i >= 0 && vetor[i] > aux) // 5*n unidades de tempo.
       { 
           vetor[i+1] = vetor[i]; // 4*n unidades de tempo.
           i = i-1; // 3*n unidades de tempo.
       } 
       vetor[i+1] = aux; // 4*n unidades de tempo 
   } 
   //Assim a complexidade na an�lise assint�tica � O(n^2).
   //A complexidade no modelo Ram � de (17*n + 7)(12n).
   //O Insertion Sort apresenta uma menor complexidade, j� que n�o necessita de fazer todas as compara��es, apenas para os elementos que ainda n�o foram ordenados.
} 