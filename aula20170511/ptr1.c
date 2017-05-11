#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    unsigned int x=0xFACA8421;
    unsigned char *p; //byte
    printf("Variavel: %X\n",x);
    printf("O endereco: %p\nNa base decimal: %u\n",&x,x);//%u unsigned
    p=(unsigned char*)&x; //converte o endereço de x para de char (static_cast)
    for(;i<sizeof(x);i++) //sizeof tamanho em bytes
        printf("Endereco: %p | Contem %u ou %X\n",p+i,*(p+i),p[i]); //p[i] no lugar de *(p+1)
    return EXIT_SUCCESS; //STDLIB.H
}
