#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
    {
        printf("Vowel");
    }
    else if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
        printf("Consonant");
    }
    else
    {
        printf("Not an alphabet");
    }
    return 0;
}
