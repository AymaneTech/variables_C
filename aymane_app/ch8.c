#include <stdio.h>
#include <math.h>
/challenge 8/
 //Octal
int main(){
  int nbr,n=1,n1,x1,n2,x2,n3,x3;
  printf("enter un decimal: ");
  scanf("%d",&nbr);
  n1=nbr/8;
  x1=nbr%8;
  n2=n1/8;
  x2=n1%8;
  x3=n2%8;
  printf("%d%d%d",x3,x2,x1);

//hexadecimal

  int nbr,n=1,n1,x1,n2,x2,n3,x3;
  printf("enter un decimal: ");
  scanf("%d",&nbr);
  n1=nbr/16;
  x1=nbr%16;
  n2=n1/16;
  x2=n1%16;
  x3=n2%16;
  printf("%d%d%d",x3,x2,x1);
    return 0;
}