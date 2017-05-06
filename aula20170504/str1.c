#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define N 256
int main()
{
    int i;
    char frase[N];
    printf("Digite uma frase: ");
    fgets(frase,N,stdin);
    frase[strlen(frase)-1]='\0'; //tirar enter
    for(i=0;frase[i];i++)
        frase[i]=toupper(frase[i]);
    printf("\nO tamanho da string e' : %d\n",strlen(frase));
    if(strncmp(frase,"BOM DIA",7)==0)
        printf("\nBom dia pra voce tambem!\n");
    else
        printf("Voce quer dizer: \"%s\"?\n",frase);
    return 0;
}
