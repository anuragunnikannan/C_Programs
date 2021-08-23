#include <stdio.h>
int main()
{
    int n;
    int f = 1;  /*To store factorial of a number*/
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        f = f*i;    /*Storing factorial of number*/
    }/*End of loop*/
    printf("Factorial = %d",f);
    return 0;
}
