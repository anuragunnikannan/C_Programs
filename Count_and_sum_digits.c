#include <stdio.h>
int main()
{
    int n;
    int sum = 0;    /*To store sum of digits*/
    int c = 0;  /*To count number of digits*/
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        int d = n%10;
        sum = sum+d;    /*Storing sum of digits*/
        c++;    /*Counting number of digits*/
        n = n/10;
    }/*End of loop*/
    printf("Number of digits = %d\n",c);
    printf("Sum of digits = %d\n",sum);
    return 0;
}
