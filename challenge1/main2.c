#include <stdio.h>

/*challenge 2*/

int main() {
    float f , c;


    printf("Entrez la temp�rature en Fahrenheit : ");
    scanf("%f", &f);
    c = (f - 32) / 1.8;

    printf("La temp�rature en Celsius est : %.2f�C\n", c);


    if (c < 0) {
        printf("Sensation ressentie : Tr�s froid\n");
    } else if (c < 20) {
        printf("Sensation ressentie : Froid\n");
    } else if (c < 30) {
        printf("Sensation ressentie : Chaud\n");
    } else {
        printf("Sensation ressentie : Tr�s chaud\n");
    }

    return 0;
}
