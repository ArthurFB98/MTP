#include <stdio.h>
int main()
{
    int a,b=0,fat=1;
    printf("Digite um numero: ");
    scanf("%i",&a);
    while(b!=a)
    {
        fat=b*fat+fat;
        b++;
    }
    printf("O fatorial e': %i\n",fat);
    return 0;
}
