#include <stdio.h>
int main()
{
    int a,soma=0,i;
    printf("Digite um numero: ");
    scanf("%i",&a);
    for(i=2;i<a;i++)
        if(a%i==0)
        soma=i+soma;
        if(soma+1==a)
            printf("O numero e' perfeito\n");
        else
            printf("O numero nao e' perfeito\n");
        return 0;
}
