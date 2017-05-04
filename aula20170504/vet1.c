#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    unsigned int x;
    int i=0;
    long int vet[10000];
    float y=0;
    srand(time(0));
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d",&x);
    for(i;i<10000;i++)
    {
        vet[i]=rand()%x +1;
        y=vet[i]+y;
    }
    y=y/10000;
    printf("\nA media e': %.1f\n",y);
    return 0;
}
