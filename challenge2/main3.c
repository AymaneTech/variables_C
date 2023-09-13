#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*challenge 1 */

int main()
{
    int age;
    char nom [30], prenom[30],sexe[30],numero[30];

    printf("Veuillez entrer vos coordonnees\n");

    printf("Prenom: ");
    scanf("%s",&prenom);

    printf("Nom: ");
    scanf("%s",&nom);

    printf("Sexe: ");
    scanf("%s",&sexe);

    printf("Age: ");
    scanf("%d",&age);

    printf("Numero: ");
    scanf("%s",&numero);

    printf("\t\t\t Vos informations ont ete sauvegardees\n");
    printf("Prenom:%s \n",prenom);
    printf("Nom:%s \n",nom);
    printf("Sexe: %sh \n",sexe);
    printf("Age:%d \n",age);
    printf("Numero:%s \n",numero);
    return 0;
}
