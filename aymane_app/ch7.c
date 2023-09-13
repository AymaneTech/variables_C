#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,a,b,c,x;
    printf("entre nombre de 3 chiffres : ");
    scanf("%d",&N);

    a=N%10;
    x=N/10;

    b=x%10;
    c=x/10;

    printf("%d%d%d",a,b,c);



    return 0;
}

