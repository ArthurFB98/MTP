#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0,vetor[]={0,1,2,4,8},count=0;
    char *p;
    p=(char*)&vetor;
    for(;i<sizeof(vetor);i++)
    {
        printf("O conteudo em bytes do vetor: %u\n",p[i]);
        if(p[i]==0x00)
            count++;
    }
        printf("Tem %d que armazenaram apenas 0's",count);
    return EXIT_SUCCESS;
}
