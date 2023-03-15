#include <stdio.h>
#include <stdlib.h>

// Função para preencher o vetor com numeros aleatorios
void preencherVetor(int vet[]){
  for(int i = 0; i < 10; i++){
     vet[i] = rand()%100;
  }
}

// Função recursiva para encontrar o numero no vetor
int procurarNumero(int vet[], int loc, int num){
  if (vet[loc] == num){
    return loc;
  }else if(loc == -1){
    return -1;
  }else 
    return procurarNumero(vet, loc - 1, num);
}  


int main(void) {
  int vet[10];
  int num;
  int loc = 10;
  preencherVetor(vet);
  int i = 0;
  //printar o vetor para facilitar a escolha do numero
  for (i = 0; i < 10; i++){
    printf("[%d]", vet[i]);
  }
  printf("\nDigite o numero que deseja encontrar: ");
  scanf("%i", &num);
  loc = procurarNumero(vet, loc, num);
  if (loc == -1){
    printf("O numero procurado não pode ser encontrado no vetor");
  }else{
    printf("o numero se localiza na %iª posição", loc + 1);
  }
  return 0;
}
