#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	printf("Enter a word: ");
	gets(s);
	int c = 0;
	int l = strlen(s);
	char r[l];
	for(int i = l-1;i>=0;i--)
	{
		r[c++] = s[i];
	}
	if(stricmp(s, r)==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	return 0;
}
