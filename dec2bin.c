/*
 *Arquivo:dec2bin.c
 *Data criaçã:08/dez/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 64






int main(int argc, char** argv) {
    //armazenador dos binarios 
    int VETOR[MAX];
    //auxiliares
    int i = 0,decimal,t;
    printf("Digite o decimal escolhido:\n");
    scanf("%d",&decimal);

    while(decimal > 0){
        VETOR[i] = decimal%2;
        decimal =decimal/2;
        i++;
    }

    //inverter esse vetor
    for (t=i-1; t>=0; t--)
    {
        printf("%d",VETOR[t]);
    }
    

    
    

    

    

    

   

return 0;
}

