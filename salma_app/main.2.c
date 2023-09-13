#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    printf("Challenge 2 : Affichage Température\n");

    printf("enter temp in Fahrenheit : ");
    scanf("%f",&f);

    c = (f-32)/1.8;

    printf("temp in celcius = %.2f",c);

    return 0;
}
