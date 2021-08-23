#include <stdio.h>
int main()
{
    int sub1, sub2, sub3, total;
    float percent;
    printf("Enter marks in 1st subject:\n ");
    scanf("%d",&sub1);
    printf("Enter marks in 2nd subject:\n ");
    scanf("%d",&sub2);
    printf("Enter marks in 3rd subject:\n ");
    scanf("%d",&sub3);
    total = sub1+sub2+sub3;
    percent = (total*100)/300;
    printf("The percentage is %f \n",percent);
    if(percent>=60)
    {
        printf("Division: First");
    }
    else if(percent>=50)
    {
        printf("Division: Second");
    }
    else if(percent>=40)
    {
        printf("Division: Third");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
