#include <stdio.h>
int main()
{
	int i,j,k;
	int n = 1;
	for(i = 1;i<=4;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
		for(int k = 1;k<=i;k++)
		{
			printf("%d ",n);
		}
		n++;
		printf("\n");
	}
	return 0;
}
