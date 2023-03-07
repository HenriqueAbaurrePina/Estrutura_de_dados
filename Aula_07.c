#include <stdio.h>

int main()
{
    int numeros[5];
    int maior = 0;
    int posicao = 0;
    for (int i=0; i < 5; i++){
        printf("Numero %d:", i + 1);
        scanf("%i", &numeros[i]);
        if (i == 0){
            maior = numeros[i];
        }
        else if (numeros[i] > maior){
            maior = numeros[i];
            posicao = i + 1;
        }
    }        
    
    printf("o maior numero do array é o %iº numero, com o valor de %i", posicao, maior);
    
    return 0;
}
