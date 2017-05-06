#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define N 256

int main ()
{
    int i;
    char frase[N];
    printf("Digite uma frase: ");
    fgets(frase,N,stdin);
    for(i=0;frase[i];i++)
        frase[i]=tolower(frase[i]);
    printf("A frase em minusculas: %s\n",frase);
    return 0;
}
