#include <stdio.h>

int quo(int *p1,int *p2) {
    return (*p1)/(*p2);
}

int res(int *p1,int *p2) {
    return (*p1)%(*p2);
}

int main() {
    int N1,N2;
    printf("Digite dois numero inteiros: ");
    scanf("%d%d",&N1,&N2);
    printf("Quociente: %d\nResto: %d\n",quo(&N1,&N2),res(&N1,&N2));
    return 0;
}
