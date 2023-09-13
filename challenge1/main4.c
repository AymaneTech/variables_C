#include <stdio.h>
/*challenge 4*/

int main(){
  float a,b,c,d,add,som;
  printf("Entrez des nombers entier pour le calculer:\n");
  printf("saisies le premier nomber:");
  scanf("%.2f",&a);
  printf("saisies le second nomber:");
  scanf("%.2f",&b);
  printf("saisies le troisieme nomber:");
  scanf("%.2f",&c);
  printf("saisies le quatrieme nomber:");
  scanf("%.2f",&d);

  add = a+b+c+d;
  som = add/4;


  printf("La somme des nombres est:%.2f\n",add);
  printf("La moyenne des nombres est:%.2f\n",som);

  return 0;
}
