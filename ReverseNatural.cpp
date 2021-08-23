#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d\n",n);
        n--;    /*Decrementing n by 1*/
    }/*End of loop*/
    return 0;
}
