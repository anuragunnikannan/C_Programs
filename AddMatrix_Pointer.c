#include <stdio.h>
#define rows 3
#define cols 3
void input(int m[][cols])
{
	int i, j;
	for(i = 0;i<rows;i++)
	{
		for(j = 0;j<cols;j++)
		{
			scanf("%d",(*(m+i)+j));
		}
	}
}
void add(int m[][cols], int n[][cols], int r[][cols])
{
	int i, j;
	for(i=0;i<rows;i++)
	{
		for(j = 0;j<cols;j++)
		{
			*(*(r+i)+j) = *(*(m+i)+j) + *(*(n+i)+j);
		}
	}
}
void print(int m[][cols])
{
	int i, j;
	for(i = 0;i<rows;i++)
	{
		for(j = 0;j<cols;j++)
		{
			printf("%d ",*(*(m+i)+j));
		}
		printf("\n");
	}
}
int main()
{
	int a[rows][cols];
	int b[rows][cols];
	int c[rows][cols];
	printf("\nEnter elements for 1st matrix: ");
	input(a);
	printf("\nEnter elements for 2nd matrix: ");
	input(b);
	printf("\n1st Matrix:\n");
	print(a);
	printf("\n2nd Matrix:\n");
	print(b);
	add(a, b, c);
	printf("\nResultant Matrix:\n");
	print(c);
	return 0;
}
