/*
 *Arquivo:txtFibonacci.c
 *Data criaçã:19/jan/2023
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
int fib(int n);


int main(int argc, char** argv) {
    int n;
    int abc;
    printf("Digite a posisao requerida: ");
    scanf("%d",&n);
    printf("Numero correspondente na sequencia: %d",fib(n-1));
    FILE *pont_arq;
    pont_arq = fopen("fibonacci.txt","w");

    if (pont_arq == NULL)
    {
        printf("Erro ao tentar abrir");
        exit(1);
    }
    for (int i = 1; i < n; i++)
    {
        abc = fib(i);
        fprintf(pont_arq,"%d\n",abc);
        
    }
    
    
    
    
    fclose(pont_arq);
    
    



    

    return 0;
}
int fib(int n){
    if (n == 0) return 0;
    if (n == 1||n==2)return 1;
    
    return fib(n-1)+fib(n-2);
    
    
}