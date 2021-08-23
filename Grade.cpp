#include <stdio.h>
int main()
{
    int m;
    printf("Enter marks: ");
    scanf("%d",&m);
    if(m>=90)
    {
        printf("Grade: O");
    }
    else if(m>=80 && m<=89)
    {
        printf("Grade: A");
    }
    else if(m>=70 && m<=79)
    {
        printf("Grade: B");
    }
    else if(m>=60 && m<=69)
    {
        printf("Grade: C");
    }
    else if(m>=50 && m<=59)
    {
        printf("Grade: D");
    }
    else if(m>=35 && m<=49)
    {
        printf("Grade: P");
    }
    else if(m<35)
    {
        printf("Grade: F");
    }
    return 0;
}
