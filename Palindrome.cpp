#include <stdio.h>
int main()
{
    int n;
    int r = 0;  /*To store reverse of number*/
    printf("Enter a number: ");
    scanf("%d",&n);
    int n1 = n;
    while(n1>0)
    {
        int d = n1%10;
        r = r*10+d; /*Storing reverse of number*/
        n1 = n1/10;
    }
    printf("Reverse = %d\n",r);
    if(r==n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }/*End of if else*/
    return 0;
}
