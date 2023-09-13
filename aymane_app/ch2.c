// Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius et affiche la sensation ressentie (très froid, froid, chaud, très chaud) La formule :

// C = (F-32)/1.8

#include<stdio.h>
int main (){
    float  f,c;
    printf("Enter the value with Fahreneit :  ");
    scanf("%f", &f);
    
    c = (f-32)/1.8;
    printf("the value with C is  : %f \n", c);

    if (c <= -25){
        printf("Very cold !!!");
    }
    if (c <= 10){
        printf("cold !!!");
    }
    if (c <= 30 ){
        printf("cool !!!");
    }
    if (c <= 40){
        printf("Hot  !!!");
    }
    if (c >= 41){
        printf("very hot !!!");
    }
    return 0;
}