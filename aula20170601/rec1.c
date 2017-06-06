#include <stdio.h>
#include <string.h>
#define N 256

void inv(char string[],int i) {
    if(i>strlen(string));
    else {
    printf("%c",string[strlen(string)-i]);
    i++;
    return inv(string,i);
    }
}

int main() {
    char frase[N];
    int i=1;
    printf("Digite uma frase: ");
    fgets(frase,N,stdin);
    frase[strlen(frase)-1]='\0';
    inv(frase,i);
    printf("\n");
    return 0;
}
