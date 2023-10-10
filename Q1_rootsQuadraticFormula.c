#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    // Input coefficients from the user
    printf("Enter coefficient a: ");
    scanf("%lf", &a);

    printf("Enter coefficient b: ");
    scanf("%lf", &b);

    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check if roots are real or complex
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and distinct:\n");
        printf("Root 1: %lf\n", root1);
        printf("Root 2: %lf\n", root2);
    } 

    else if (discriminant == 0) 
    {
        root1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 and Root 2: %lf\n", root1);
    } 
    
    else 
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("Roots are complex:\n");
        printf("Root 1: %lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2: %lf - %lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
