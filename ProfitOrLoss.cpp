#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter Cost Price: ");
    scanf("%d",&cp);
    printf("Enter Selling Price: ");
    scanf("%d",&sp);
    if(cp<=sp)
    {
        int profit = sp-cp;
        printf("Profit = %d",profit);
    }
    else
    {
        int loss = cp-sp;
        printf("Loss = %d",loss);
    }
    return 0;
}
