#include <stdio.h>
#include <time.h>

int sorteio (){
    int a;
    a=(rand()%10)+1;
    printf ("Numero sorteado foi %d\n",a);
    return a;
}

main (){
    srand(time(0));
    int n,i,a;
    printf("Digite um numero de 1 a 10: ");
    scanf ("%d",&n);
    getchar ();
    for (i=0; i<10; i++){
        printf ("Aperte enter para sortear o numero!");
        getchar ();
        a=sorteio();
        if (a==n){
            printf ("PARABENS!!\n");
        }
    }
}
