#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(float *vet,int qtd) {
    int i;
    float M=0;
    for(i=0;i<qtd;i++)
        M=M+vet[i];
        return (M/(float)qtd);
}

float desvpadrao(float *vet,int qtd) {
    int i;
    float desvio=0,m=media(vet,qtd);
    for(i=0;i<qtd;i++)
        desvio=desvio+pow(vet[i]-m,2);
    desvio=sqrt(desvio/(float)(qtd-1));
    return desvio;
}

int main() {
    float *vetor;
    int qtde, i;
    printf("Quantos numeros deseja entrar?\n");
    scanf("%d",&qtde);
    vetor=(float*)malloc(qtde*sizeof(float));
    for(i=0;i<qtde;i++) {
        printf("Elemento [%d]: ",i);
        scanf("%f",&(vetor[i]));
    }
    printf("Media = %g\n",media(vetor,qtde));
    printf("Desvio padrao = %g\n",desvpadrao(vetor,qtde));
    free(vetor);
}
