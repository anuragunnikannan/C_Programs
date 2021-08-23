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
void multiply(int m[][cols], int n[][cols], int r[][cols])
{
	int i, j, k;
	int s;
	for(i = 0;i<rows;i++)
	{
		for(j = 0;j<cols;j++)
		{
			s = 0;
			for(k = 0;k<cols;k++)
			{
				s+= *(*(m+i)+k) * *(*(n+k)+j);
			}
			*(*(r+i)+j) = s;
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
	printf("\n1st Matrix: \n");
	print(a);
	printf("\n2nd Matrix: \n");
	print(b);
	multiply(a, b, c);
	printf("\nResultant Matrix: \n");
	print(c);
	return 0;
}
