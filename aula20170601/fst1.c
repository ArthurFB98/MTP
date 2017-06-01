#include <stdio.h>

struct div {
    int R;
    int Q;
};

struct div resquo(int a,int b);

int main() {
    struct div A;
    int N,D;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d",&N,&D);
    A=resquo(N,D);
    printf("Quociente: %d\nResto: %d",A.Q,A.R);
    return 0;
}

struct div resquo(int a,int b) {
    struct div A;
    A.R=a%b;
    A.Q=a/b;
    return A;
}
