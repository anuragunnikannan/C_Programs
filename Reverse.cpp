#include <stdio.h>
int main()
{
	char s[10], r[10];
	int b, e, c = 0;
	printf("Enter a string: ");
	gets(s);
	while(s[c]!='\0')
	{
		c++;
	}
	e = c-1;
	for(b=0;b<c;b++)
	{
		r[b] = s[e];
		e--;
	}
	r[b] = '\0';
	printf("%s\n",r);
	return 0;
}
