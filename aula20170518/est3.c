#include <stdio.h>
#include <math.h>

struct Colors {
    float R;
    float G;
    float B;
};

struct Colors Conv(struct Colors A, struct Colors B) {
    B.G=16 + (65.481*A.R + 128.553*A.G + 24.996*A.B);
    B.B=128 + (-37.797*A.R - 74.203*A.G + 112.0*A.B);
    B.R=128 + (112.0*A.R - 93.786*A.G - 18.214*A.B);
    return B;
}

int main() {
    struct Colors C,C1,R;
    printf("Digite as componentes RGB, respectivamente: ");
    scanf("%f%f%f",&C.R,&C.G,&C.B);
    C.R=(C.R)/255;
    C.G=(C.G)/255;
    C.B=(C.B)/255;
    R=Conv(C,C1);
    printf("As cores convertidas sao: %g, %g, %g\n", round(R.G), round(R.B), round(R.R));
    return 0;
}
