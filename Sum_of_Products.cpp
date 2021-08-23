#include <stdio.h>
int main()
{
    int s;
    printf("Enter size: ");
    scanf("%d",&s);
    int n[s];
    int sum = 0;
    printf("Enter %d numbers: ",s);
    for(int i = 0;i<s;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i = 0;i<s-1;i++)
    {
        sum = sum + n[i]*n[i+1];
    }
    printf("The sum is: %d",sum);
    return 0;
}
