#include <stdio.h>

int main()
{
    float x,y,soma;
    printf("Digite dois numeros: ");
    scanf("%f %f",&x,&y);
    soma=x+y;
    printf("O endereco de %g e' %p\n",x,&x);
    printf("O endereco de %g e' %p\n",y,&y);
    printf("O endereco de %g e' %p\n",soma,&soma);
    return 0;
}
