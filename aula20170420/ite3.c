#include <stdio.h>
#include <string.h>
int main()
{
    int i=0;
    char palavra[256];
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    while (palavra[i]!='\0')
        i++;
    printf("A palavra tem %i letras\n",i);
    return 0;
}
