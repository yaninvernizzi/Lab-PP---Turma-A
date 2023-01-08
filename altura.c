/*
 *Arquivo:somaGauss.c
 *Data criaçã:03/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>

typedef
    struct Altura
    {
        int metros, centimetros;
    }
Altura;

int main(int argc, char** argv) {
    Altura altura;
    printf("informe sua altura: ");
    scanf("%d.%d",&altura.metros,&altura.centimetros);

    printf("Altura %dm%d",altura.metros,altura.centimetros);
    
    



    

    return 0;
}
