#include <stdio.h>

int main() {
    int age;
    char choice = 'y';

    while(choice == 'y' || choice == 'Y') {
        printf("Please enter your age: ");
        scanf("%d", &age);

        if (age >= 18) {
            printf("Congrats you are all set\n");
            return 0;
        } else {
            printf("You are too young to sign up\n");
        }

        printf("Do you want to enter your age again? (y/n): ");
        scanf(" %c", &choice); // Notice the space before %c to consume any leading whitespace
    }

    return 0;
}
