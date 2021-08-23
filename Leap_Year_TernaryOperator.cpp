#include <stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    int l = (year%4==0)?((year%100==0)?((year%400==0)?1:0):1):0;
    (l==1)?printf("Leap Year"):printf("Not Leap year");
    return 0;
}
