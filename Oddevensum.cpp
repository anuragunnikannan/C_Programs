#include <stdio.h>
int main()
{
    int n;
    int oddsum = 0 ;    /*To store sum of odd numbers*/
    int evensum = 0;    /*To store sum of even numbers*/
    printf("Enter value of n: ");
    scanf("%d",&n);
    int i = 1;
    printf("Even numbers: \n");
    while(i<=n)
    {
        if(i%2==0)  /*Checking for even number*/
        {
            printf("%d\n",i);
            evensum = evensum+i;    /*Storing sum of even numbers*/
        }/*End of if*/
        i++;
    }/*End of loop*/
    i = 0;  /*Reinitializing i*/
    printf("Odd numbers: \n");
    while(i<=n)
    {
        if(i%2!=0)  /*Checking for odd number*/
        {
            printf("%d\n",i);
            oddsum = oddsum+i;  /*Storing sum of odd numbers*/
        }/*End of if*/
        i++;
    }/*End of loop*/
    printf("Sum of even numbers = %d \n",evensum);
    printf("Sum of odd numbers = %d \n",oddsum);
    return 0;
}
