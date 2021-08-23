#include <stdio.h>
int main()
{
    float a;
    printf("Enter a floating point number: ");
    scanf("%f",&a);
    int n = ((int)a)%10;
    printf("Rightmost Digit %d",n);
    return 0;
}
