/*
 *Arquivo:aritmInt.c
 *Data criaçã:03/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    // Digite dois numeros:
    int A = 0, B = 0;


    printf("Digite dois numeros!\n");
    scanf("%d %d", &A, &B);
    printf("%d + %d = %d\n", A, B, A+B);
    printf("%d - %d = %d\n", A, B, A-B);
    printf("%d * %d = %d\n", A, B, A*B);
    printf("%d / %d = %d\n", A, B, A/B);
    printf("%d %% %d = %d\n", A, B, A%B);

    return 0;
}
    