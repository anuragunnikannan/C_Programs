#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of c: ");
    scanf("%d",&c);
    int d = b*b - 4*a*c;    /*Calculating discriminant*/
    float r1 = 0.0;
    float r2 = 0.0; /*To store roots of equation*/
    int r = 0;   /*To store real part of root*/
    int i = 0; /*To store imaginary part of root*/
    switch(d>0)
    {
    case 1:
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);    /*If d is greater than 0, then value will be 1 and this case will be run*/
        printf("Root1 = %f\n",r1);
        printf("Root2 = %f\n",r2);
        break;
    case 0:
        switch(d<0) /*If d is less than 0, then value will be 0 and this case will be run*/
        {
        case 1:
            r = (-b)/(2*a);
            i = sqrt(-d)/(2*a);
            printf("Root1 = %d + %d i\n",r,i);
            printf("Root2 = %d - %d i\n",r,i);
            break;
        case 0:
            r1 = r2 = -b/(2*a);
            printf("Root1 = %f\n",r1);
            printf("Root2 = %f\n",r2);
            break;
        }
        break;
    }
    return 0;
}
