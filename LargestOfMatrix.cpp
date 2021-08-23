#include <stdio.h>
int main()
{
	int a[3][3];
	printf("Enter 9 elements: ");
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMATRIX: \n");
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int m = a[0][0];
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			if(m<a[i][j])
			{
				m = a[i][j];
			}
		}
	}
	printf("\nLargest: %d",m);
	return 0;
}
