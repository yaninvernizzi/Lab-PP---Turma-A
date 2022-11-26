#include <stdio.h>
#include <stdlib.h>
bool primo(int a){
    for (int i = 2; i < a; i++)
    {
        if (a%i == 0)
        {
            return false;
        }
        
    }
   return true; 
}



int main(int argc, char** argv) {
    int menor, maior, soma=0;

    printf("Digite o intervalo requerido:\n");

    scanf("%d %d",&menor,&maior);

    for (menor; menor<= maior; menor++)
    {
        if (primo(menor) && menor!= 1 && menor!=0)
        {
            soma = soma+menor; 
        }
        
    }
    
    printf("A soma dos numeros primos = %d\n",soma);
    

return 0;
}