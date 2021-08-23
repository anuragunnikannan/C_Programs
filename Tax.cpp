#include <stdio.h>
int main()
{
    int i;
    printf("Enter income: ");
    scanf("%d",&i);
    float tax;
    if(i<=5000)
    {
        tax = 0.0;
    }
    else if(i>5000 && i<=6000)
    {
        tax = 0.1*(i-5000);
    }
    else if(i>6000 && i<=15000)
    {
        tax = 100+0.2*(i-6000);
    }
    else if(i>15000)
    {
        tax = 1900+0.3*(i-15000);
    }
    printf("Tax: %f",tax);
    return 0;
}
