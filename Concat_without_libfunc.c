#include <stdio.h>
int main()
{
	char s[20];
	char t[20];
	printf("Enter a string: ");
	scanf("%s",&s);
	int i = 0;
	int l = 0;
	while(s[i]!='\0')
	{
		l++;
		i++;
	}
	printf("Enter another string: ");
	scanf("%s",&t);
	int j = 0;
	while(t[j]!='\0')
	{
		s[i++] = t[j++];
	}
	printf("%s",s);
	return 0;
}
