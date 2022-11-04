/*
 *Arquivo:Somadivisores.c
 *Data criaçã:03/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int A = 0, B = 1, acompanha = 1;
    printf("Digite seu valor:\n");
    scanf("%d",&A);
    
    while (B <= A)
    {if (A % B == 0 && B != 1 && B != 0)
    {
     acompanha = acompanha + B;   
    };
    
      

     B++;   
    };
    printf("%d",acompanha);
    
        
    
    
   

    return 0;
}