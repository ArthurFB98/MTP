#include <stdio.h>
int main()
{
    int a,cont=0,i;
    printf("Digite um numero: ");
    scanf("%i",&a);
    for(i=2;i<a;i++)
        if(a%i==0)
        cont = 0;
        if(cont==0)
            printf("O numero e' primo\n");
        else
            printf("O numero nao e' primo\n");
        return 0;
}
