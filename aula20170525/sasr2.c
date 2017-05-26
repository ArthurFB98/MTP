#include <stdio.h>

void PAR(int n) {
    int i;
    for(i=1;i<=n;i++)
    if(i%2==0)
        printf("%d ",i);
}
void IMP(int n) {
    int i;
    for(i=1;i<=n;i++)
    if(i%2!=0)
        printf("%d ",i);
}
int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    PAR(n);
    printf("\n");
    IMP(n);
    return 0;
}
