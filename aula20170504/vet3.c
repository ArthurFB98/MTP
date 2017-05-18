#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j,soma=0,prod=1;
    int vet[10];
    printf("Digite 10 numeros: ");
    for(i;i<10;i++)
    scanf("%d",&vet[i]);
    for(j=0;j<10;j++)
        soma=vet[j]+soma;
    j--;
    for(j;j>-1;j--)
        prod=vet[j]*prod;
    printf("\nO somatorio e o produtorio desses valores sao, respectivamente: %i, %i\n",soma,prod);
    return 0;
}
