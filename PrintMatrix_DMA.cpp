#include <stdio.h>
#include <stdlib.h>
int main()
{
	int **m, r, c;
	printf("Enter number of rows and columns: \n");
	scanf("%d %d",&r, &c);
	m = (int**)malloc(r*sizeof(int*));
	for(int i= 0;i<c;i++)
	{
		m[i] = (int*)malloc(sizeof(int));
	}
	printf("\nEnter elements: \n");
	for(int i = 0;i<r;i++)
	{
		for(int j = 0;j<c;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("\nMatrix: \n");
	for(int i = 0;i<r;i++)
	{
		for(int j = 0;j<c;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
