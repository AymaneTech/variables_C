#include <stdio.h>

/*challenge 2*/

int main() {
    float f , c;


    printf("Entrez la température en Fahrenheit : ");
    scanf("%f", &f);
    c = (f - 32) / 1.8;

    printf("La température en Celsius est : %.2f°C\n", c);


    if (c < 0) {
        printf("Sensation ressentie : Très froid\n");
    } else if (c < 20) {
        printf("Sensation ressentie : Froid\n");
    } else if (c < 30) {
        printf("Sensation ressentie : Chaud\n");
    } else {
        printf("Sensation ressentie : Très chaud\n");
    }

    return 0;
}
