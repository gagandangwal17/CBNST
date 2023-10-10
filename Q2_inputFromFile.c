#include <stdio.h>
#include <math.h>

int main() {
    FILE *inputFile, *outputFile;
    double a, b, c, discriminant, root1, root2;

    // Open input file for reading
    inputFile = fopen("quadratic.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Read from input file
    fscanf(inputFile, "%lf %lf %lf", &a, &b, &c);

   
    fclose(inputFile);


    discriminant = b * b - 4 * a * c;

    // Open output file for writing
    outputFile = fopen("roots.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        fprintf(outputFile, "Roots are real and distinct:\n");
        fprintf(outputFile, "Root 1: %lf\n", root1);
        fprintf(outputFile, "Root 2: %lf\n", root2);
    } 
    else if (discriminant == 0) 
    {
        root1 = -b / (2 * a);

        fprintf(outputFile, "Roots are real and equal:\n");
        fprintf(outputFile, "Root 1 and Root 2: %lf\n", root1);
    } 
    else 
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        fprintf(outputFile, "Roots are complex:\n");
        fprintf(outputFile, "Root 1: %lf + %lfi\n", realPart, imaginaryPart);
        fprintf(outputFile, "Root 2: %lf - %lfi\n", realPart, imaginaryPart);
    }

    fclose(outputFile);

    printf("Roots calculated and written to 'roots.txt'.\n");

    return 0;
}
