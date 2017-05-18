#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

#define FRAND(min,max) \
(min + (max-min)*rand()/(float)RAND_MAX)

typedef
    struct cord {float x,y,z;}
    cord;
int main() {
    int i, numponto;
    srand(time(NULL));
    cord pontos[N];
    float mediax=0.0, mediay=0.0, mediaz=0.0;
    for(i=0;i<N;i++) {
        pontos[i].x=FRAND(-10.0,10.0);
        pontos[i].y=FRAND(-10.0,10.0);
        pontos[i].z=FRAND(-10.0,10.0);
    }
    printf("Escolha de 10 a 1000 pontos: ");
    scanf("%d",&numponto);
    for(i=0;i<numponto;i++) {
        mediax += pontos[i].x;
        mediay += pontos[i].y;
        mediaz += pontos[i].z;
    }
    printf("Centro de massa: (%g, %g, %g)\n",mediax/numponto, mediay/numponto, mediay/numponto);
    return 0;
}
