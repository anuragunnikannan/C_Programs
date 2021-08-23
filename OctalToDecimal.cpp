#include <stdio.h>
#include <math.h>
int main()
{
	int o;
	int n = 0;
	printf("Enter octal number: ");
	scanf("%d",&o);
	int a = o;
	int l = 0;
	while(1)
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
	for(int i = 0;i<=l;i++)
	{
		int d = o%10;
		n = n+d*pow(8, i);
		o = o/10;
	}
	printf("\nDecimal = %d",n);
	return 0;
}
