#include <stdio.h>

int main()
{

     int indice=13;
     int soma=0;
     int val=0;

    printf("digite o valor: ");
    scanf("%f",&val);

    if(val<13){
        val=val+1;
        soma=soma+val;

     }
     printf("valor:%d",soma);


    return 0;
    }
