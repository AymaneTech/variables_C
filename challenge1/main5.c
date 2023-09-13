#include <stdio.h>
#include <math.h>
/*challenge 5*/

int main(){

  int x1,y1,x2,y2,MN;
  printf("Entrez des nomber entier pour le calculer:\n");
  printf("saisies M(X1,Y1)nomber:");
  scanf("%d%d",&x1,&y1);
  printf("saisies N(X2,Y2)nomber:");
  scanf("%d%d",&x2,&y2);

  MN=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

  printf("La distance entre M et N est MN =%d",MN);

  return 0;
}
