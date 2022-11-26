/*
 *Arquivo:impares.c
 *Data criaçã:24/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int a , b;
    printf("digite o valor do intervalo:\n");
    
    scanf("%d %d",&a,&b);
    
    

    
    for ( a ; a<b; a++)
    {
        if (a % 2 != 0)
        {
            printf("%d\n",a);
        }      
    };
    
        
    
    
    
    

    return 0;
}