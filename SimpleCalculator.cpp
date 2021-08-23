#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("\n1. ADD \n");
    printf("2. SUBTRACT \n");
    printf("3. MULTIPLY \n");
    printf("4. DIVIDE \n");
    printf("5. REMAINDER \n");
    int r = 0;  /*To store the result*/
    int c;  /*To accept choice from user*/
    printf("Enter choice: ");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        r = a+b;    /*Adding 2 numbers*/
        break;
    case 2:
        r = a-b;    /*Subtracting 2 numbers*/
        break;
    case 3:
        r = a*b;    /*Multiplying 2 numbers*/
        break;
    case 4:
        r = a/b;    /*Dividing 2 numbers*/
        break;
    case 5:
        r = a%b;    /*Obtaining remainder of division of 2 numbers*/
        break;
    default:
        printf("Invalid");
    }
    printf("Result: %d",r);
    return 0;
}
