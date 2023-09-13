#include<stdio.h>

int main (){
    float a,b,c,d,sum,avr;

    printf("enter the four numbers :: ");
    scanf("%f %f %f %f", &a,&b,&c,&d);

    sum = a+b+c+d;
    avr = (a+b+c+d)/4;
    printf("the sum is :: %f\n", sum);
    printf("the avr is :: %f",avr);


    return 0;
}