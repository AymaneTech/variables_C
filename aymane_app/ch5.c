#include<stdio.h>
#include<math.h>
int main (){

    int X1, X2, Y1, Y2;
    int MN;
    printf("to calculate the distance please enter the info !!!\n");
    printf("enter the value of M(X1, Y1)::  ");
    scanf("%d %d", X1,Y1);
    printf("enter the value of N(X2, Y2)::  ");
    scanf("%d %d", X2,Y2);

    
    MN = sqrt(pow(X2-X1, 2)+ pow(Y1-Y2, 2));

    printf("The distance is :: %d", MN);

    return 0;
}