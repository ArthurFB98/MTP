#include <stdio.h>
void safeFlush()
{
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main()
{
    int a,cont=0;
    printf("Digite um numero: ");
    scanf("%i",&a);
    safeFlush();
    for(int i=1;i<=a;i++)
        if(a%i==0)
        cont++;
        if(cont==2)
            printf("O numero e' primo\n");
        else
            printf("O numero nao e' primo\n");
        return 0;
}
