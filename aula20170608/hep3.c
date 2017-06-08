#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *texto=(char*)calloc(1,sizeof(char)); //NULL
    char c;
    int len=0;
    printf("Escreva: '\\'+ENTER para encerrar:\n");
    do {
        c=getchar();
        len++;
        texto=(char*)realloc(texto,len*sizeof(char));
        texto[len-1]=toupper(c);
    } while(c!='\\');
    texto[len-1]='\0'; //garantir que o final da string sera o \0
    printf("\n\n%s",texto);
    return 0;
}
