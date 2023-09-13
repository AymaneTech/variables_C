#include <stdio.h>

int main (){
    const float pi=3.14;
    float r, cir;

    printf("enter the rayon :: ");
    scanf("%f", &r);

    cir = 2*pi*r;
    printf("le circonference: %f", cir);
    return 0;
}