#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    switch(a>b)
    {
    case 1:
        printf("%d is greater",a);
        break;
    case 0:
        printf("%d is greater",b);
        break;
    }
    return 0;
}
