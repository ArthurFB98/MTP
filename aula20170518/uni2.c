#include <stdio.h>

union uni {
    char string[4];
    int N;
};

int main() {
    union uni X;

    printf("Digite uma palavra com 3 letras: ");
    fgets(X.string,4,stdin);
    printf("0x%X\n",X.N);
    return 0;
}
