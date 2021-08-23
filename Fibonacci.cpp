#include <stdio.h>
int main()
{
    int n;
    int a = 0;
    int b = 1;
    int c;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d %d ",a,b);   /*Printing first 2 numbers*/
    for(int i = 2;i<n;i++)
    {
        c = a+b;    /*Storing next number of series*/
        printf("%d ",c);
        a = b;
        b = c;
    }/*End of loop*/
    return 0;
}
