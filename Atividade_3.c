#include <stdio.h>
#include <math.h>

void SelectionSort(int vetor[], int tam){
    
    int valorAtual, menor, posMenor;
    int i, a = 0;
    for (i; i < tam; i++){
        valorAtual = vetor[i];
        menor = vetor[i];
        for(a = (i + 1); a < tam; a++){
            if(vetor[a]<menor){
                menor = vetor[a];
                posMenor = a;
            }
        }
        if(valorAtual != menor){
        vetor[posMenor] = valorAtual;
        vetor[i] = menor;
        }
    }
}



int main()
{
    int vetor[] = {10,2,9,6,1,4,7,8,3,5};
    int tam = 10;
    SelectionSort(vetor, tam);
    for(int i = 0; i<tam; i++){
        printf("[%d] %d \n", i, vetor[i]);
    }
    return 0;
}
