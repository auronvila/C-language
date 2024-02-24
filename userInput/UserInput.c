#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char name[25]; // bytes

    printf("\n What is your name?");
//    scanf("%s", name);
// if the user input will include white space we need to use the fgets instead of scanf function.
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; // this line removes the new line after the name we have written

    printf("\n How old are you?");
    scanf("%d", &age);

    printf("\n Hello %s how are you?", name);
    printf("\n You are %d years old", age);
    return 0;
}