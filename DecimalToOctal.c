#include <stdio.h>
int main()
{
	int n, c, i;
	int o[32];
	printf("Enter number: ");
	scanf("%d",&n);
	c = 0;
	while(n>0)
	{
		o[c] = n%8;
		n/=8;
		c++;
	}
	printf("\nOctal = ");
	for(i = c-1;i>=0;i--)
	{
		printf("%d",o[i]);
	}
	return 0;
}
