#include <stdio.h>
#include <math.h>
/*challenge 6*/

int main(){
  float r, cir ;
  float pi= 3.14159265359;

  printf("enter le rayon du : ");
  scanf("%f", &r);

    cir = 2*pi*r;
    printf("la circonference: %f", cir);

  return 0;
}
