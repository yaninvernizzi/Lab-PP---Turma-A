/*
 *Arquivo:fatorial.c
 *Data criaçã:03/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int n, fat = 1, i = 1;
    printf("Digite o valor de n: ");
    scanf("%d",&n);

    while (i<=n)
    {fat = fat * i;
     i++;
        
    }
    printf("o valor do fatorial de %d ---> %d",n,fat);

    return 0;
}