#include <stdio.h>
int main()
{
	int n, c, i;
	char h[32];
	printf("Enter a number: ");
	scanf("%d",&n);
	c = 0;
	while(n>0)
	{
		int d = n%16;
		if(d<10)
		{
			h[c++] = 48+d;
		}
		else
		{
			h[c++] = 55+d;
		}
		n = n/16;
	}
	printf("Hexadecimal = ");
	for(i = c-1;i>=0;i--)
	printf("%c",h[i]);
	return 0;
}
