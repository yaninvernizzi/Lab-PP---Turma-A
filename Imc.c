/*
 *Arquivo:imc.c
 *Data criaçã:03/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    float peso, altura;

    printf("Digite seu respectivo peso e altura: \n");
    scanf("%f %f",&peso,&altura);
    printf("%.3f, %.3f\n", peso, altura);
    
    float IMC = (peso/(altura * altura));
    printf("%.3f\n",IMC);
    if (IMC >= 0 && IMC < 16){
     printf("%.3f (Perigo de vida)",IMC);    
    };
    if (IMC >= 16.0 && IMC < 17.0){
     printf("%.3f (Muito abaixo do Peso\n)",IMC);   
    };

    if (IMC >= 17.0 && IMC < 18.5)
    { 
      printf("%.3f (Abaixo do peso)",IMC);    
    }
    
    if (IMC >= 18.5 && IMC < 25.0){
     printf("%.3f (Peso normal)\n",IMC);
    };

    if (IMC >= 25.0 && IMC < 30.0){
     printf("%.3f (Acima do peso)\n",IMC);
    };

    if (IMC >= 30.0 && IMC < 35.0){
     printf("%.3f (Obesidade Grau I)\n",IMC);
    };

    if (IMC >= 35.0 && IMC < 40.0){
     printf("%.3f (Obesidade Grau II)\n",IMC);
    };

    if (IMC > 40.0){
     printf("%.3f (Obesidade Grau III)\n",IMC);
    };

    
    
    
    




    

    return 0;
}