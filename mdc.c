/*
 *Arquivo:somaGauss.c
 *Data criaçã:03/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
int mdc(int a,int b);
int main(int argc, char** argv) {
    int n1,n2,resp;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d",&n1,&n2);
    resp = mdc(n1,n2);
    printf("Resultado: %d",resp);
    



    

    return 0;
}

int mdc(int a, int b){
    if(a%b==0){
        return b;
    }
    else{
        return mdc(b,(a%b));
    }
}
