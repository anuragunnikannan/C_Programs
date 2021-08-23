#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 1st number: \n");
    scanf("%d",&a);
    printf("Enter 2nd number: \n");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is maximum",a);
    }
    else
    {
        printf("%d is maximum",b);
    }
    return 0;
}
