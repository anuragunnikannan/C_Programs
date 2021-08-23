#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st angle: ");
    scanf("%d",&a);
    printf("Enter 2nd angle: ");
    scanf("%d",&b);
    printf("Enter 3rd angle: ");
    scanf("%d",&c);
    int sum = a+b+c;
    if(sum==180)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
