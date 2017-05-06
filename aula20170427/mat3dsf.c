#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(0));
    float P,A,i=0;
    int count=0;
    printf("Digite a probabilidade desejada: ");
    scanf("%f",&P);
    for(i=0;i<100;i++)
    {
        A=rand()%101;
        A=A/100;
        if(A<P)
            count++;
    }
    printf("Vezes em que o numero gerado foi menor que a probabilidade digitada: %d\n",count);
    return 0;
}
