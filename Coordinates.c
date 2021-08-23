#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter number of turns between 2 and 1000: ");
    scanf("%d",&n);
    if(n<2 || n>1000)
    {
        exit(0);
    }
    int d = 30;
    int s = 1;
    int x = 10, y = 20;
    int i;
    for(i = 3;i<=n;i++)
    {
        if(i%2!=0)
        {
            s = i/2;
            if(s%2==0)
            {
                x = x+d;
            }
            else
            {
                x = x-d;
            }
            d = d+10;
        }
        else
        {
            s = (i+1)/2;
            if(s%2==0)
            {
                y = y-d;
            }
            else
            {
                y = y+d;
            }
            d = d+10;
        }
    }
    printf("%d, %d",x,y);
    return 0;
}
