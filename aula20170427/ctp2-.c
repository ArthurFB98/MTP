#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define N 256

int main ()
{
    int i, count=0;
    char frase[N];
    printf("Digite uma frase: ");
    fgets(frase,N,stdin);
    for(i=0;i<strlen(frase);i++)
        if(isalpha(frase[i])!=0)
            count++;
    printf("O numero de caracteres na frase e': %d\n",count);
    return 0;
}
