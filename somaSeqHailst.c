#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    //inicio
    int A,B,soma=0;

    printf("informe o inicio da sequencia:\n");

    scanf("%d",&A);
    B=A;

    for (A; B != 1; A++)
    {
        if (B == A && B%2 ==0)
        {
            printf("%d\n",B/2);
            soma=soma+B;
            B=B/2;
        }

        else if (B==A && B%2!=0)
           {
              printf("%d\n",(3*B)+1);
              soma=soma+B;
              B=(3*B)+1;
            }
        
        else if (B!=A && B%2==0)
           {
              printf("%d\n",B/2);
              soma=soma+B;
              B=B/2;
        
            }
        else if(B!=A && B%2!=0){
          printf("%d\n",(3*B)+1);
          soma=soma+B;
          B=(3*B)+1;
        }
        
    }
    
    printf("a soma dessa sequencia:%d\n",soma+1);
    
    
    

    
    
    
        
    
    
    
    

    return 0;
}