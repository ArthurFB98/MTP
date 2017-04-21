#include <stdio.h>
void safeFlush()
{
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main()
{
    int B,P,R=0,aux=1;
    printf("Digite o valor de B e P, respectivamente: ");
    scanf("%i %i",&B,&P);
    safeFlush();
    while(aux<=P)
    {
        R=B*B+R;
        aux++;
    }
    if(P==1)
        printf("O resultado de B elevado a P e' %i\n",B);
        else
    printf("O resultado de B elevado a P e' %i\n",R);
    return 0;
}
