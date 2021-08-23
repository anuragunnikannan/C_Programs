#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	char h[32];
	int n = 0;
	printf("Enter hexadecimal number: ");
	gets(h);
	int l = strlen(h);
	l--;
	int v = 0;
	for(int i = 0;h[i]!='\0';i++)
	{
		if(h[i]>='0' && h[i]<='9')
		{
			v = h[i]-48;
		}
		else if(h[i]>='A' && h[i]<='F')
		{
			v = h[i]-65+10;
		}
		n = n+v*pow(16, l);
		l--;
	}
	printf("Decimal = %d",n);
	return 0;
}
