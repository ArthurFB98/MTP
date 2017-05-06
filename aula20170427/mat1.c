#include <stdio.h>
#include <math.h>
int main ()
{
    float a,b,c,d,D;
    printf("Digite as coordenada x,y do primeiro e do segundo ponto, respectivamente: ");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    D=sqrt(pow(c-a,2)+pow(d-b,2));
    printf("A distancia entre os pontos e': %g\n",D);
    return 0;
}
