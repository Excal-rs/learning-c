#include <stdio.h>
#include <math.h>

int main(){
    double a = 9;
    double b = -9.5124;
    double c = 30;
 

    printf("a = %lf \n", a);
    printf("b = %lf \n", b);
    printf("c = %lf \n\n", c);


    printf("The square root of \'a\' is: %lf \n",   sqrt(a)  );
    printf("The 4th power of \'a\' is: %lf \n",     pow(a, 4));
    printf("The log of \'a\' is: %lf \n\n",         log(a)   );


    printf("The ceil of \'b\' is: %lf \n",             ceil(b)   );
    printf("The floor of \'b\' is: %lf \n",            floor(b)  );
    printf("The nearest int of \'b\' is: %lf \n",      round(b)  );
    printf("The absolute value of \'b\' is: %lf \n\n", fabs(b)   );

    printf("The sin of \'c\' is: %lf \n", sin(c) ); // returns values in radians not degrees
    printf("The cos of \'c\' is: %lf \n", cos(c) );
    printf("The tan of \'c\' is: %lf \n", tan(c) );
}
