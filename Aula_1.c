/* */
//Comentario

//incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int, float, char, double
    int x;
    int y;
    int total;
    
    printf("Digite o valor de X: \n");
    scanf("%d",&x);
    //%c é para char
    
    /*printf("Digite o valor de y: \n");
    scanf("%d",&y);
    total = x+y;
    printf("O valor de x é %d, o valor de Y é: %d, e o valor total é: %d",x,y,total);
    */
    
    //operações basicas +,-,*,/,%
    //operadores relacionais >,<,>=,<=,==,!=
    //operadores Logicos &&,||,!
    //operadores de incremento ++,--
    //operação simplificada +=,-=,*=,/=,%=
    
    if(x%2 == 0){
        printf("X é um numero par");
    }
    else{
        printf("x é um numero impar");
    }
    
    return 0;
    
}
