#include <stdio.h>
#include <complex.h>
int main()
{
    double complex Z,X,Y;
    float Zr,Zi,Xr,Xi,Yr,Yi;
    printf("Digite a parte real do primeiro numero e a complexa, respectivamente: ");
    scanf("%f%f",&Zr,&Zi);
    printf("Digite a parte real do segundo numero e a complexa, respectivamente: ");
    scanf("%f%f",&Xr,&Xi);
    X=Xi*I+Xr;
    Z=Zi*I+Zr;
    Y=X+Z;
    printf("O resultado da soma dos complexos e' %lf+%lf*I\n",creal(Y),cimag(Y));
    printf("ou igual a %lf < %lf rad\n",cabs(Y),carg(Y));
    return 0;
}
