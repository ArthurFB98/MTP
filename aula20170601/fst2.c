#include <stdio.h>

struct N {
    int num;
    int den;
};

void soma(struct N A,struct N B);

int main() {
    struct N A,B;
    printf("Digite o primeiro numero racional: ");
    scanf("%d/%d",&A.num,&A.den);
    printf("Digite o segundo numero racional: ");
    scanf("%d/%d",&B.num,&B.den);
    soma(A,B);
    return 0;
}

void soma(struct N A,struct N B) {
    printf("A resposta e': %d/%d\n",A.num*B.den+B.num*A.den,A.den*B.den);
}
