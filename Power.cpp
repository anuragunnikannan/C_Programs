#include <stdio.h>
int main()
{
    int n;  /*To store the number*/
    int p;  /*To store the power*/
    int r = 1;  /*To store the result*/
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&p);
    for(int i = 1;i<=p;i++)
    {
        r = r*n;    /*Multiplying n and r for p times*/
    }/*End of loop*/
    printf("Result: %d",r);
    return 0;
}
