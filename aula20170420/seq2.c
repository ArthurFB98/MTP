#include <stdio.h>
void safeFlush()
{
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main ()
{
    float l1,l2,a;
    printf("Digite os dois lados do paralelogramo: ");
    scanf("%f %f",&l1,&l2);
    safeFlush();
    a = l1*l2;
    printf("A area do paralelogramo e': %f\n",a);
    return 0;
}
