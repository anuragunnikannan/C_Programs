#include <stdio.h>
int main()
{
    int n;
    int r; /*To store reverse of number*/
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int l = n%10;   /*Storing last digit of number*/
    while(n>0)
    {
        int d = n%10;
        r = r*10+d; /*Storing reverse of number*/
        n = n/10;
    }/*End of loop*/
    int f = r%10;   /*Storing first digit of number*/
    sum = f+l;
    printf("Sum of first and last digit is %d",sum);
    return 0;
}
