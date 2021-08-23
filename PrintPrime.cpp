#include <stdio.h>
int main()
{
    int n;
    int p;  /*To check whether number is prime or not*/
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 2;i<=n;i++)
    {
        p = 1;
        for(int j = 2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                p = 0;  /*If i is divisible by any number other than 1 and itself, then not prime*/
                break;
            }/*End of if*/
        }/*End of loop*/
        if(p==1)    /*Condition for prime*/
        {
            printf("%d\n",i);
        }/*End of if*/
    }/*End of loop*/
    return 0;
}
