#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	char a;
	printf("Enter a string: \n");
	gets(s);
	printf("Enter a character: \n");
	scanf("%c", &a);
	int c = 0;
	int l = strlen(s);
	int i;
	for(i = 0;i<l;i++)
	{
		if(s[i]==a)
		{
			c++;
		}
	}
	printf("Frequency of %c is %d", a, c);
	return 0;
}
