#include<stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int valor, indice=13 , soma=0 , tot , resp;

    printf("digite o valor:");
    scanf("%d",&valor);

      if(valor<indice)
    {
        soma++;
        tot=soma+valor;
        printf("o valor é menor que o indice: %d",tot);
    }
    else

    {
        soma++;
        tot=soma+valor;
        printf("o valor é maior que o indice:%d/n",tot);
    }



    return 0;
    }
