#include <stdio.h>
#include <math.h>

#define f(x) ( (1)*(x)*(x)*(x) - (4)*(x) - (9) )

int main()
{
    double a, b;
    repeat:
    printf("Enter the interval [a, b]: ");
    scanf("%lf %lf", &a, &b);

    
    if((f(a)*f(b))>0) 
    {
        printf("Invalid interval\n"); //repeat input
        goto repeat;
    }
    int i=0;
    double x=(a+b)/2;
    printf("Iteration\t a\t\t\t b\t\t\t x\t\t\t f(x)\n");

    while (fabs(a-b)>0.000001)
    {
        x=(a+b)/2;
        if(f(x)==0)
        {
            printf("Root is %lf", x);
            break;
        }
        else if((f(a)*f(x))<0)
        {
            b=x;
        }
        else
        {
            a=x;
        }

        printf("%d\t\t %lf\t\t %lf\t\t %lf\t\t %lf\n", i, a, b, x, f(x));

        i++;
        
    }
    
    printf("Root is %lf", x);

    

    return 0;
}
