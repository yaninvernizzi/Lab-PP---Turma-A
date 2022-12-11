/*
 *Arquivo:contaVogais.c
 *Data criaçã:08/dez/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1024

void getstr(char * str, int nchar);
char * upper(char * str);


int main(int argc, char** argv) {
    char palavra[N];
    int acumulativa = 0,tamanho = strlen(palavra);
    printf("Digite a palvra:\n");
    //passando a palavra 
    getstr(palavra,N);
    //passando para somente maiusculas
    upper(palavra);
    //encontrando as vogais
    for (int i = 0; i < tamanho; i++)
    {
       if (palavra[i] == 65)
       {
        acumulativa = acumulativa + 1;
       }
       else if(palavra[i] == 69){
         acumulativa = acumulativa + 1;
        }
       else if(palavra[i] == 73){
        acumulativa = acumulativa + 1;
       }
       else if(palavra[i] == 79){
        acumulativa = acumulativa + 1;
       }
       else if(palavra[i] == 85){
        acumulativa = acumulativa + 1;
       }
    }
    printf("%d",acumulativa);
    
    

    

    

    

   

return 0;
}

void getstr(char * str, int nchar) {
    char c;
    for(int i = 0; i < nchar; i++) {
        c = getchar();
        if(c != '\n') {
            str[i] = c;
        } else {
            str[i] = '\0';
            break;
        }
    }
    str[nchar-1] = '\0';
}
char * upper(char * str) {
    int i = 0;
    while(str[i]) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= ('a' - 'A');
        i++;
    }
    return str;
}