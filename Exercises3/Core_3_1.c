#include <stdio.h>
#include "math.h"

double triangleArea(double a, double b, double c, double semiP) {
    return sqrt(semiP*(semiP-a)*(semiP-b)*(semiP-c));
}


double trianglePerim(double a, double b, double c) {
    return a+b+c;
}


double triangleSemiPerim(double a, double b, double c) {
    return 0.5*(a+b+c);
}



void clearBuffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

}






int main(void) {
    double a;
    double b;
    double c;
    int values;
    do {
        printf("Please enter the three side lengths of the triangle, separated by a space: ");
        values = scanf("%lf %lf %lf",&a,&b,&c);

        if (values != 3 || a <= 0 || b <= 0 || c <= 0)
        {
            clearBuffer();
            printf("Try Again");
        }
        
    } while (values != 3 || a <= 0 || b <= 0 || c <= 0);

    printf("The Perimeter is: %lf", trianglePerim(a,b,c));
    printf("\nThe Semi-Perimeter is: %lf", triangleSemiPerim(a,b,c));
    printf("\nThe Area is: %lf\n", triangleArea(a,b,c,triangleSemiPerim(a,b,c)));

    return 0;
}