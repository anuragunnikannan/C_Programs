#include <stdio.h>
#include <string.h>
int main()
{
	char s[50];
	printf("Enter a sentence: ");
	gets(s);
	int l = strlen(s);
	strlwr(s);
	int v = 0, c = 0, sp = 0, spl = 0;
	for(int i = 0;i<l;i++)
	{
		if(s[i]==' ')
		{
			sp++;
		}
		else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			v++;
		}
		else if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^'||s[i]=='&'||s[i]=='*'||s[i]=='.')
		{
			spl++;
		}
		else
		{
			c++;
		}
	}
	printf("\nWords = %d\n",(sp+1));
	printf("Vowels = %d\n",v);
	printf("Consonants = %d\n",c);
	printf("Special Characters = %d\n",spl);
	printf("Space = %d",sp);
	return 0;
}
