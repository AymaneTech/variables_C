#include<stdio.h>

int main (){
    int a,b,c,d,sum,avr;

    printf("enter the four numbers :: ");
    scanf("%d %d %d %d", &a,&b,&c,&d);

    sum = a+b+c+d;
    avr = (a+b+c+d)/4;
    printf("the sum is :: %d\n", sum);
    printf("the avr is :: %d",avr);


    return 0;
}