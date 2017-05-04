#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <ctype.h>
#define N 256
int main()
{
    int i;
    char frase[N],cifra[N];
    printf("Digite uma frase: ");
    fgets(frase,N,stdin);
    frase[strlen(frase)-1]='\0';
    for(i=0;i<N;i++)
    {
    if(isalpha(frase[i]))
    {
        if((frase[i]>='A' && frase[i]<'N') || (frase[i]>='a' && frase[i]<'n'))
            cifra[i]=frase[i]+13;
            else
                cifra[i]=frase[i]-13;
    }
     else
            cifra[i]=frase[i];
    }
    printf("Mensagem: %s\n",cifra);
    return 0;
}
