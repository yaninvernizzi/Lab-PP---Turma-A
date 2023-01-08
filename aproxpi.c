/*
 *Arquivo:somaGauss.c
 *Data criaçã:03/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float aproxpi(int n){
    if(n == 0)return 4;
    return aproxpi(n-1) + 4.0* ((n%2==0)? 1 : -1)/(2*n+1);
}
int main(int argc, char** argv) {
    int n;
    printf("Digite n: ");
    scanf("%d",&n);
    
    printf("%f",aproxpi(n));
    
    



    

    return 0;
}
