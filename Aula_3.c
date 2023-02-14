#include <stdio.h>

int soma (){
    int x = 0;
    int y = 0;
    printf("Digite o primeiro valor da soma: \n");
    scanf("%d",&x);
    printf("Agora digite o segundo valor da soma: \n");
    scanf("%d",&y);
    int resultado;
    resultado = x + y;
    return resultado;
}

int subtracao(){
    int x = 0;
    int y = 0;
    printf("Digite o primeiro valor da subtração: \n");
    scanf("%d",&x);
    printf("Agora digite o segundo valor da subtração: \n");
    scanf("%d",&y);
    int resultado;
    resultado = x - y;
    return resultado;
}

int multiplicacao(){
    int x = 0;
    int y = 0;
    printf("Digite o valor a ser multiplicado: \n");
    scanf("%d",&x);
    printf("Agora digite o valor q multiplicará o valor anterior: \n");
    scanf("%d",&y);
    int resultado;
    resultado = x * y;
    return resultado;
}

float divisao(){
    float x = 0;
    float y = 0;
    printf("Digite o valor a ser dividido: \n");
    scanf("%f",&x);
    printf("Agora digite o valor q dividirá o valor anterior: \n");
    scanf("%f",&y);
    float resultado;
    resultado = x/y;
    return resultado;
}
float selecao(int selecionado){
    switch(selecionado){
            case 1:
                printf("\nSomar!");
                return soma();
            case 2:
                printf("\nSubtrair!");
                return subtracao();
            case 3:
                printf("\nMultiplicar!");
                return multiplicacao();
            case 4:
                printf("\nDividir!");
                return divisao();
            case 5:
                printf("\nSaindo...");
            default:
                printf("\n Digite um valor valido.\n");
        }
}


int main()
{   
    float resultado = 0;
    int selecionado = 0;
    while(selecionado !=5 ){
        printf("Menu: \n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Sair\n");
        scanf("%d",&selecionado);
        resultado = selecao(selecionado);
        if(selecionado <5){
            printf("Resultado = %.2f\n",resultado);
        }
    }

    return 0;
}
