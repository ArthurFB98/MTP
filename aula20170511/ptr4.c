#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    float a,b,soma=0;
    char *p;
    char *q;
    char *r;
    printf("Digite dois numeros inteiros: ");
    scanf("%f%f",&a,&b);
    soma=a+b;
    p=(char*)&a;
    q=(char*)&b;
    r=(char*)&soma;
        printf("Endereco: %p | Contem %u\n",p,*(p));
        return 0;
}
