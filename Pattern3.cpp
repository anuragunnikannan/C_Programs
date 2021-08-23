#include <stdio.h>
int main()
{
	int c = 10;
	for(int i = 4;i>=1;i--)
	{
		for(int j = 1;j<=i;j++)
		{
			printf("%d ",c);
			c--;
		}
		printf("\n");
		for(int s = 0;s<=4-i;s++)
		{
			printf(" ");
		}
	}
	return 0;
}
