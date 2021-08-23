#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Upper Case");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Lower Case");
    }
    return 0;
}
