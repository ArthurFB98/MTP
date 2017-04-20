#include <stdio.h>
void safeFlush()
{
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main ()
{
    float A,B,C,D,E,M;
    printf("Digite as cinco notas de um aluno: ");
    scanf("%f %f %f %f %f",&A,&B,&C,&D,&E);
    safeFlush();
    M =(A*2+B*2+C*2+D*3+E*5)/(3*2+3*1+5*1);
    printf("A media ponderada das notas e': %f\n",M);
    return 0;
}
