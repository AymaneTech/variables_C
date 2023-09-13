#include <stdio.h>

int main() {
    int age;
    long long phone_num;
    char name[30], last_name[30], sexe;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your last name: ");
    scanf("%s", last_name);
    printf("Enter your gender (M / F): ");
    scanf(" %c", &sexe);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your phone number: ");
    scanf("%lld", &phone_num);

    printf("\t\t\tyour info are here \n");
    printf("Name: %s\n", name);
    printf("Last name: %s\n", last_name);
    printf("Gender: %c\n", sexe);
    printf("Age: %d\n", age);
    printf("Phone number: %d\n", phone_num);

    return 0;
}
