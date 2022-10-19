#include <stdio.h>
#include <math.h>
// #include <string.h>

int main(){
    const double PI =  3.141592653589793;
    double radius;
    double circumference;
    double area;

    printf("\nPlease enter a radius: ");
    scanf("%lf", &radius);

    circumference = 2 * radius * PI;
    area = PI * pow(radius,2);

    printf("Circumference of circle is: %lf \n", circumference );
    printf("Area pf circle is: %lf \n", area);


    return 0;
}