#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	printf("Enter a sentence: ");
	gets(s);
	int l = strlen(s);
	int w = 0;
	for(int i = 0;i<l;i++)
	{
		if(s[i]==' '||s[i]=='!'||s[i]=='.'||s[i]=='?')
		{
			w++;
		}
		else
		{
			continue;
		}
	}
	printf("\nNumber of words: %d",w);
	return 0;
}
