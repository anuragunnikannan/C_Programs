#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number for multiplication table: ");
    scanf("%d",&n);
    for(int i = 1;i<=12;i++)
    {
        int p = n*i;    /*Multiplying 2 numbers*/
        printf("%d x %d = %d\n",n,i,p);
    }/*End of loop*/
    return 0;
}
