/*
 *Arquivo:divisores.c
 *Data criaçã:24/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <math.h>


int main(int argc, char** argv) {
    int A,B,C;

    printf("Digite o numero:\n");
    scanf("%d",&A);

    for (B=1; B <= A; B++)
    {
        if (A%B == 0)
        {
            printf("Divisor de n:%d\n",B);
        }
        
    }
    


   

return 0;
}