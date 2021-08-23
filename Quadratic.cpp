#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of c: ");
    scanf("%d",&c);
    int d = (b*b)-(4*a*c);
    double r1 = 0, r2 = 0;
    double i = 0;
    if(d>0)
    {
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("Root1 = %lf\n",r1);
        printf("Root2 = %lf\n",r2);
    }
    else if(d==0)
    {
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        printf("Root1 = %lf\n",r1);
        printf("Root2 = %lf\n",r2);
    }
    else if(d<0)
    {
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        i = sqrt(-d)/(2*a);
        printf("Root1 = %lf\n",r1);
        printf("Root2 = %lf\n",r2);
        printf("Imaginary = %lf\n",i);
    }
    return 0;
}
