#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct aluno{
    int matricula;
    char nome[30];
    float nota;
}aluno;

int main()
{
    struct aluno x = {2,"João",5};
    printf("o aluno %s, de matricula %d, tem a nota %.2f\n", x.nome, x.matricula, x.nota);
    printf("Digite a nova nota do aluno %s: ", x.nome);
    scanf("%f", &x.nota);
    
    printf("\nO aluno %s, de matricula %d, tem a nota %.2f", x.nome, x.matricula, x.nota);

    return 0;
}

/* ================================================================================================================================== */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct forma{
    int tipo;
    float area;
    float perimetro;
}forma;

float Calcular_Area(int tipo)
{
    switch(tipo){
        case 1:
            int baset;
            int alturat;
            printf("Digite o valor da base:\n");
            scanf("%d", &baset);
            printf("Agora digite o valor da altura:\n");
            scanf("%d", &alturat);
            float areat = (baset*alturat)/2;
            return areat;
        case 2:
            int ladoq;
            printf("Digite o valor do lado:\n");
            scanf("%d", &ladoq);
            float areaq = pow(ladoq,2);
            return areaq;
        case 3:
            int baser;
            int alturar;
            printf("Digite o valor da base:\n");
            scanf("%d", &baser);
            printf("Agora digite o valor da altura:\n");
            scanf("%d", &alturar);
            float arear = (baser*alturar);
            return arear;
        case 4:
            int raio;
            printf("Digite o valor do raio:\n");
            scanf("%d", &raio);
            float areac = 3.14*pow(raio,2);
            return areac;
        case 5:
            int baseM;
            int basem;
            int alturaT;
            printf("Digite o valor da base maior:\n");
            scanf("%d", &baseM);
            printf("Agora digite o valor da base menor:\n");
            scanf("%d", &basem);
            printf("Agora digite o valor da altura:\n");
            scanf("%d", &alturaT);
            float areaT = ((baseM + basem)*alturaT)/2;
            return areaT;
            
    }
}

int main()
{
    struct forma x;
    x.tipo = 0;
    while(x.tipo <= 0 || x.tipo >= 6){
        printf("Selecione a forma geometrica para os calculos:\nTriangulo - 1:\nQuadrado - 2\nRetangulo - 3\nCirculo - 4\nTrapesio - 5\n");
        scanf("%d", &x.tipo);
        if(x.tipo <= 0 || x.tipo >= 6){
            printf("favor escolher uma forma valida\n");
        }
    }
    x.area = Calcular_Area(x.tipo);
    printf("A area da forma escolhida é: %.2f", x.area);
    return 0;
}

