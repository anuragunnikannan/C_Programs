#include <stdio.h>
#include <math.h>
int main()
{
	int b;
	int n = 0;
	printf("Enter a binary number: ");
	scanf("%d",&b);
	int a = b;
	int l = 0;
	for(;;)
	{
		if(a>0)
		{
			a = a/10;
			l++;
		}
		else
		{
			break;
		}
	}
	int i;
	for(i = 0;i<=l;i++)
	{
		int d = b%10;
		n = n + d*pow(2, i);
		b = b/10;
	}
	printf("%d",n);
	return 0;
}
