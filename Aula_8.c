#include <stdio.h>

int main()
{
    int vetor[] = {1,2,3,6,5,4,7,8,9,10};
    int i = 0;
    int num = 0;
    printf("Digite o valor que queira identificar no vetor.\n");
    scanf("%i",&num);
    while (i < 10){
       if (num == vetor[i]){
           printf("o numero digitado está na posicão %i do vetor\n", i + 1);
           break;
       }else{
            if (i == 9){
                printf("o numero digitado não se encontra no vetor\n");
                break;
            }else{
            i++;
            }
       }
    }
    int par = 0;
    int u = 0;
    while (u < 10){
       if (vetor[u]%2 == 0){
           par = par + 1;
           u++;
       }else{
           u++;
       }
    }
    printf("A quantidade de numeros pares é igual a %i\n", par);
    
    float med = 0;
    for(int m = 0; m <= 10; m++){
        if(m < 10){
        med = med + vetor[m];
        }else{
            med = med/10;
            printf("a média do vetor é: %.2f\n", med);
        }
        
    }
    int maior = 0;
    int menor = 0;
    for(int o = 0; o < 10;){ 
        if(vetor[o] > maior){
            maior = vetor[o];
            o++;
        }else{
            if(vetor[o] == maior){
              o++;
            }else{          
              for(int n = 0; n <= 10;){
                  if(vetor[o] < vetor[n]){
                      menor = vetor[o];
                      vetor[o] = maior;
                      vetor[n] = menor;
                      break;
                  }
                  else{
                      n++;
                  }
              }
            }
        }
    }
    for(int o = 0; o < 10; o++){
      printf("%i ", vetor[o]);
    }  
    return 0;
}
