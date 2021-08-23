#include <stdio.h>
int main()
{
    int n;
    int f = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        if(n%i==0)
        {
            f++;
        }
    }
    if(f==2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
