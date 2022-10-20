#include <stdio.h>
#include <math.h>

int main(){
    
    double a;
    double b;
    double hyp;

    printf("Enter side A: ");
    scanf("%lf", &a);

    printf("Enter side B: ");
    scanf("%lf", &b);

    hyp = sqrt(pow(a,2) + pow(b,2));

    printf("Hypotenuse is %lf \n", hyp);

    return 0;
}