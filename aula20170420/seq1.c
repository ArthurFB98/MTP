#include <stdio.h>
void safeFlush()
{
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main ()
{
    float l, a;
    printf("Entre com o lado do quadrado: ");
    scanf("%f",&l);
    safeFlush();
    a = l*l;
    printf("A  area do quadrado e': %g\n",a);
    return 0;
}
