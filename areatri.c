/*
 *Arquivo:areaTriRet.c
 *Data criaçã:24/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float distpontos(float a, float b,float c, float d){
   float somadosquadrados = sqrt(pow((c-a),2)+pow((d-b),2));
   return somadosquadrados;
}

int main(int argc, char** argv) {
    //inicio
    float a,b,c,d;
    
    printf("digite a coordenada do ponto A:\n");
    scanf("%f %f",&a,&b);

    printf("Digite a coordenada do ponto B\n");
    scanf("%f %f",&c,&d);

    float disca=distpontos(c,b,a,b),discb=distpontos(c,b,c,d);

    printf("o ponto C = %2.f,%2.f \n",c,b);

    printf("A area e = %f",(disca*discb)/2);
    printf("Area igual %g",(disca*discb)/2);

    
    
    

    
    
    
        
    
    
    
    

    return 0;
}