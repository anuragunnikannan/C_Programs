#include <stdio.h>
int main()
{
    int n;
    int f = 0;  /*To store each factor*/
    int c = 1;  /*To check prime or not*/
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 2;i<=n;i++)
    {
        if(n%i==0)
        {
            f = i;  /*Storing each factor*/
            for(int j = 2;j<=f/2;j++)
            {
                if(f%j==0)  /*Checking whether the factor is prime or not*/
                {
                    c = 0;
                    break;
                }/*End of if*/
            }/*End of loop*/
            if(c==1)    /*Condition for prime*/
            {
                printf("%d\n",f);
            }/*End of if*/
        }/*End of if*/
    }/*End of loop*/
    return 0;
}
