#include <stdio.h>
int main()
{
	int n, c, i;
	int b[32];
	printf("Enter number: ");
	scanf("%d",&n);
	c = 0;
	while(n>0)
	{
		b[c] = n%2;
		n = n/2;
		c++;
	}
	printf("\nBinary = ");
	for(i = c-1;i>=0;i--)
	{
		printf("%d",b[i]);
	}
	return 0;
}
