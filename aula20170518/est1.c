#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define SOMA(pa, pb, pr)({ \
    pr.x=pa.x+pb.x;\
    pr.y=pa.y+pb.y;\
                          })

#define DISTANCIA(pa, pb)(sqrt(pow ((pa.x-pb.x), 2)+pow ((pa.y-pb.y), 2)))

struct Pnt {
    float x;
    float y;
};

main (){
    struct Pnt p1, p2, p3;
    printf("Digite 2 pontos de cordenadas x e y: ");
    scanf ("%f %f %f %f", &p1.x, &p1.y, &p2.x, &p2.y);
    printf ("Com o printf (%g, %g)\n", p1.x+p2.x, p1.y+p2.y);
    SOMA(p1, p2, p3);
    printf ("Usando macro (%g, %g)\n", p3.x, p3.y);
    printf ("%.4f\n",DISTANCIA(p1, p2));

}
