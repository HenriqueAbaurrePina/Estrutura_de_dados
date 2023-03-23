#include <stdio.h>
#include <math.h>

void InsertionSort(int vetor[], int tam){
    
    int anterior, valorAtual;
    for (int i = 1; i < tam; i++){
        valorAtual = vetor[i];
        anterior = i - 1;
        while(anterior >= 0 && vetor[anterior] > valorAtual){
            vetor[anterior + 1] = vetor[anterior];
            anterior = anterior - 1;
        }
        vetor[anterior + 1] = valorAtual;
    }
}



int main()
{
    int vetor[] = {1,2,3,6,10,4,7,8,9,5};
    int tam = 10;
    InsertionSort(vetor, tam);
    for(int i = 0; i<tam; i++){
        printf("[%d] %d \n", i, vetor[i]);
    }
    return 0;
}
