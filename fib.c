/*
 *Arquivo:somaGauss.c
 *Data criaçã:03/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int n;
    printf("Digite a posisao requerida: ");
    scanf("%d",&n);
    printf("Numero correspondente na sequencia: %d",fib(n));
    



    

    return 0;
}
int fib(int n){
    if (n == 0) return 0;
    if (n == 1||n==2)return 1;
    
    return fib(n-1)+fib(n-2);
    
    
}