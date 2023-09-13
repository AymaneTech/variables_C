#include <stdio.h>
/*challenge 3*/

int main(){
  int a,b,c,d,add,som;
  printf("Entrez deux nomber entier pour le calculer:\n");
  printf("saisies le premier nomber:");
  scanf("%d",&a);
  printf("saisies le second nomber:");
  scanf("%d",&b);
  printf("saisies le troisieme nomber:");
  scanf("%d",&c);
  printf("saisies le quatrieme nomber:");
  scanf("%d",&d);

  add = a+b+c+d;
  som = add/4;


  printf("La somme des nombres est:%d\n",add);
  printf("La moyenne des nombres est:%d\n",som);

  return 0;
}
