#include <stdio.h>

int main() {
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Please enter the radius of the circle: ");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius;

    area = PI * radius * radius;

    printf("\n The circumference of the radius is: %lf", circumference);
    printf("\n Area %lf: ", area);

}