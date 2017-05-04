#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j;
    int vet[10], vet2[10];
    printf("Digite 10 numeros: ");
    for(i;i<10;i++)
    scanf("%d",&vet[i]);
    i--;
    for(j=0;j<10;j++,i--)
        vet2[j]=vet[i];
    j=0;
    printf("\nO reverso desse vetor e': ");
    for(j;j<10;j++)
    printf("%d ",vet2[j]);
    return 0;
}
