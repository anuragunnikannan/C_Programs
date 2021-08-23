#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st side: ");
    scanf("%d",&a);
    printf("Enter 2nd side: ");
    scanf("%d",&b);
    printf("Enter 3rd side: ");
    scanf("%d",&c);
    if(a==b && b==c)
    {
        printf("Equilateral");
    }
    else if(a==b || b==c || c==a)
    {
        printf("Isoceles");
    }
    else
    {
        printf("Scalene");
    }
    return 0;
}
