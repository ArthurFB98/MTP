#include <stdio.h>
void safeFlush()
{
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main ()
{
    int n;
    printf("Digite um numero: ");
    scanf("%i",&n);
    safeFlush();
    if(n%2==1)
        printf("O numero e' impar\n");
    else
        printf("O numero e' par\n");
    if(n%3==0)
        printf("O numero e' multiplo de 3\n");
    if(n%5==0)
        printf("O nuemro e' multiplo de 5\n");
    if(n%7==0)
        printf("O nuemro e' multiplo de 7\n");
    return 0;
}
