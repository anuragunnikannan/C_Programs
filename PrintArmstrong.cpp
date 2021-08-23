#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int sum = 0;    /*To store sum of cubes of digits*/
    printf("Enter a number: ");
    scanf("%d",&n);
    int d;
    for(int i = 1;i<=n;i++)
    {
        int a = i;
        d = (int)log10(a)+1;    /*To find total digits*/
        while(a>0)
        {
            int l = a%10;   /*Extracting each digit*/
            sum = sum+ceil(pow(l, d));    /*Storing sum of cubes of digits*/
            a = a/10;
        }/*End of loop*/
        if(i==sum)  /*Condition for Armstrong number*/
        {
            printf("%d\n",i);
        }/*End of if*/
        sum = 0;
    }/*End of loop*/
    return 0;
}
