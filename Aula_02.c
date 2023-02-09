#include <stdio.h>

int main()
{
    int i;
    
    int bois[3];
    int maior;
    for(i=0; i<3; i++){
        printf("digite o peso do boi %d:\n",i+1);
        scanf("%d", &bois[i]);
    }
    maior = 0;
    for (int j = 0;j>3;j++){
        if(bois[i]>bois[maior]){
            maior = i;
        }
    }
    printf("Boi %d é o maior", &maior + 1);
    return 0;
}
