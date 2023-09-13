#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int nbr,a,b,c,r1,r2;

    printf("entrer l entier: ");
    scanf("%d",&nbr);
    c=nbr/100;
    r1=nbr-c*100;
    b=r1/10;
    r2=r1-b*10;
    a=r2;
    printf("%d%d%d",a,b,c);

}
