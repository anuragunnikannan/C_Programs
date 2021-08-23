#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    int m = (a>b)?(a>c?a:c):(b>c?b:c);
    printf("Biggest is %d",m);
    return 0;
}
