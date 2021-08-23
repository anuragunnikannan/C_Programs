#include <stdio.h>
int main()
{
    int n;
    int sum = 0;    /*To store sum of factors*/
    int f;  /*To store factors*/
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        sum = 0;
        for(int j = 1;j<i;j++)
        {
            if(i%j==0)
            {
                sum = sum+j;
            }
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
