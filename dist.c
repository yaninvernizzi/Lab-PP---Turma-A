/*
 *Arquivo:dist.c
 *Data criaçã:24/nov/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <math.h>


float distpontos(float a, float b,float c, float d){
   float somadosquadrados = sqrt(pow((c-a),2)+pow((d-b),2));
   return somadosquadrados;
}


int main(int argc, char** argv) {
   float a,b,c,d;
   printf("digite as coordenadas do primeiro ponto:\n");
   scanf("%f %f",&a,&b);
   printf("Digite as coordenadas do segundo ponto:\n");
   scanf("%f %f",&c,&d);

   printf("%g",distpontos(a,b,c,d));

return 0;
}