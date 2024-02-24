#include <stdio.h>
int main(){
    // format specifier % = define and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 3.11;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item 1 costs: $%8.2f \n", item1);
    printf("item 2 costs: $%-8.2f \n", item2);
    printf("item 3 costs: $%.2f \n", item3);

    return 0;
}