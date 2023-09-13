#include <stdio.h>
/*challenge 2*/

int main(){
  int a,b,add,sub,mul,div,mod;
  printf("Entrez deux nomber entier pour le calculer:\n");
  printf("saisies le premier nomber:");
  scanf("%d",&a);
  printf("saisies le second nomber:");
  scanf("%d",&b);

  add = a+b;
  sub = a-b;
  mul= a*b;
  div= a/b;
  mod=a%b;

  printf("La somme des deux nombres est:%d\n",add);
  printf("La soustraction des deux nombres est:%d\n",sub);
  printf("La multiplication des deux nombres est:%d\n",mul);
  printf("La division des deux nombres est:%d\n",div);
  printf("La module des deux nombres est:%d\n",mod);

  return 0;
}
