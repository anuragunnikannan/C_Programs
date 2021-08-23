#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	printf("Enter a string: ");
	gets(s);
	int l = strlen(s);
	printf("Vowels: ");
	for(int i = 0;i<l;i++)
	{
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			printf("%c",s[i]);
		}
	}
	printf("\nConsonants: ");
	for(int i = 0;i<l;i++)
	{
		if(!(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
