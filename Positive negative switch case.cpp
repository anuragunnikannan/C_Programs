#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    switch(a>0)
    {
    case 1:
        printf("%d is positive",a);
        break;
    case 0:
        switch(a<0)
        {
        case 1:
            printf("Negative");
            break;
        case 0:
            printf("Zero");
            break;
        }
        break;
    }
    return 0;
}
