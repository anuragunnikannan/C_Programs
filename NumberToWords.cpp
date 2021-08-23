#include <stdio.h>
int main()
{
    int n;
    int r = 0;  /*To store reverse of number*/
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        int d = n%10;
        r = r*10+d; /*Storing reverse of each number*/
        n = n/10;
    }/*End of loop*/
    while(r!=0)
    {
        switch(r%10)
        {
        case 0:
            printf(" Zero ");
            break;
        case 1:
            printf(" One ");
            break;
        case 2:
            printf(" Two ");
            break;
        case 3:
            printf(" Three ");
            break;
        case 4:
            printf(" Four ");
            break;
        case 5:
            printf(" Five ");
            break;
        case 6:
            printf(" Six ");
            break;
        case 7:
            printf(" Seven ");
            break;
        case 8:
            printf(" Eight ");
            break;
        case 9:
            printf(" Nine ");
            break;
        }/*End of switch*/
        r = r/10;
    }/*End of loop*/
    return 0;
}
