#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float l1,l2,a,l3;
    printf("Digite o tamanho de dois lados consecutivos de um triangulo e o angulo (radianos) formado entre eles, respectivamente: ");
    scanf("%f%f%f",&l1,&l2,&a);
    l3=sqrt(pow(l1,2)+pow(l2,2)-2*l1*l2*cos(a));
    printf("O tamanho do terceiro lado do triangulo vale: %f\n",l3);
    return 0;
}
