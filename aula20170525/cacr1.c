#include <stdio.h>

int c=0;

void primos(int P, int b[]){
	int j=1, i;
	for(i=2;i<P;i++)
		if(P%i==0)
			j=0;
	if(j==1){
        b[c]=P;
        c++;
	}
}

int main () {
    int N,p[64],i,j;
    printf("Digite um numero: ");
    scanf("%d",&N);
    for (i=2;i<=N;i++)
        primos(i,p);
    for (i=0;i<c;i++)
        for (j=i;j<c;j++)
            if (p[i]+p[j]==N)
                printf("%d=%d+%d\n", N, p[i], p[j]);
    return 0;
}
