#include <stdio.h>
int main()
{
	int r;
	printf("Enter number of lines: ");
	scanf("%d",&r);
	int c = 1;
	for(int i = 0;i<=r;i++)
	{
		for(int s = 1;s<=r-i;s++)
		{
			printf(" ");
		}
		for(int j = 0;j<i;j++)
		{
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
