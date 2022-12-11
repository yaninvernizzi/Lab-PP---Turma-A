/*
 *Arquivo:reverteString.c
 *Data criaçã:08/dez/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N  1024

void getstr(char * str, int nchar);

void upper(char * str);



int main(int argc, char** argv) {
    //inciando a string
    char palavra[N];
    
    //inicio
    printf("Digite uma palvra/frase/letra:\n");
    //passando a mensagem
    getstr(palavra,N);


    char pp[strlen(palavra)];
    int Auxi = strlen(palavra);
    //USANDO A função upper para tranformar em maiucula toda a string
    upper(palavra);
    for (int y=Auxi-1; y >=0 ; y--){
        printf("%c",palavra[y]);
    }
    
    
    

    


    //printf("A conversao para maiuscula da palavra invertida fica:%s\n",palavra);
    
    
    

    
    
    
        
    
    
    
    

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

void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}

