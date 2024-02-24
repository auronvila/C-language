#include <stdio.h>
#include <stdbool.h>

int main() {
    // log hello C
    //    printf("hello C");


    // variables -> Allocate space in memory to store a value.
    // We refer to a variables name to access the stored value.
    // WE need to specify the type of the value we want to store e.g. int, char

    int x; // declaration
    x = 2; // initialization
    int y = 321; // declaration & initialization

    int age = 18; // integer
    float gpa = 2.1; // floating point number

    char grade = 'C'; // single character
    char name[] = "Auron"; // array of characters

    float pi = 3.14;

    float c = 3.14141; // 4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.123132131; // 8 bytes (64 bits of precision) 15-16 digits %lf
    // doubles are more often used because they are more precise

    bool e = true; // 1 byte (true or false) %d
    // booleans are displayed like this: 1 = true, 0 = false

    char f = 120; // 1 byte (-128, +127) %d or %c
    unsigned g = 255; // 1 byte (0, +255) %d or %c

    short int h = 32767; // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d

    int j = 2147483647; // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 1111111111111111111; // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 1111111111111111111; // 8bytes (0 to +18 quintillion) %llu


//    -------- ANY VARIABLE THAT IS EXCEEDED ITS VALUE WILL BE RETURNED TO ITS MINIMUM VALUE --------

    // when you want to print a variable you need to specify % followed with the variable type, you add a comma and after that you add the variable
    printf("my age is %d", age);
    printf("my name is %s", name);
    printf("my grade is %c", grade);
    printf("my gpa is %f", gpa);
    // when you use floating numbers you can specify how many characters you want after the dot
    printf("P numbers value is %0.2f", pi);
    return 0;
}