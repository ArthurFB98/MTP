#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 16
int main()
{
    int i, numero, contagem=0;
    char frase[N];
    int *p;
    for(i=0;i<N;i++) frase[i]=0;
    printf("Digite uma frase: ");
    fgets(frase,N,stdin);
    p=(int*)&frase;
    for(i=0;i<sizeof(p);i++)
    printf("Decimal: %d \nHexadecimal: %X\n"),(p+i),(p+i);
    return 0;
}
