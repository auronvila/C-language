#include <stdio.h>

int main() {
    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 3;
//    int z = x + y;
//    int z = x - y;
// here we need to cast the integer number to float because if we don't it will not print the remainders, and it will round the number up.
//    float z = x / (float) y;
//    int z = x % y;

    x++;
    y--;

    printf("%d", x);
}