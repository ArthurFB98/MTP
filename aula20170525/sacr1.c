#include <stdio.h>
#include <time.h>

int dado (){
    int a;
    a=(rand()%6)+1;
    printf("%d ",a);
    return a;
}

main (){
srand (time (0));
int a=0,i=3;
while (1){
i--;
printf ("Aperte enter para lancar os dados");
getchar();
printf ("Os resultados foram: ");
a=dado()+dado()+dado()+dado()+dado();
printf ("\nA soma eh %d\n", a);
if (a<=23 && a>=18){
    printf ("Voce ganhou!\n");
    break;
}
if (i==0){
    printf ("Voce perdeu!\n" );
    break;
}
}
}
