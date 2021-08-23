#include <stdio.h>
#include <stdlib.h>
int r;
void display(int x[3][3], int y[3][3], int z[3][3])
{
	printf("\nMATRIX A: \n");
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			printf("%d	",x[i][j]);
		}
		printf("\n");
	}
	printf("\nMATRIX B: \n");
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			printf("%d	",y[i][j]);
		}
		printf("\n");
	}
	printf("\nNEW MATRIX: \n");
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			printf("%d	",z[i][j]);
		}
		printf("\n");
	}
}
void add(int x[3][3], int y[3][3])
{
	int z[3][3];
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			z[i][j] = x[i][j] + y[i][j];
		}
	}
	display(x, y, z);
}
void subtract(int x[3][3], int y[3][3])
{
	int z[3][3];
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			z[i][j] = x[i][j] - y[i][j];
		}
	}
	display(x, y, z);
}
void multiply(int x[3][3], int y[3][3])
{
	int z[3][3];
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			z[i][j] = 0;
			for(int k = 0;k<3;k++)
			{
				z[i][j] = z[i][j] + x[i][k] * y[k][j];
			}
		}
	}
	display(x, y, z);
}
int main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	printf("Enter numbers for MATRIX A: ");
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter numbers for MATRIX B: ");
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("1. ADD\n");
	printf("2. SUBTRACT\n");
	printf("3. MULTIPLY\n");
	printf("4. EXIT\n");
	int ch;
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			add(a, b);
			break;
		case 2:
			subtract(a, b);
			break;
		case 3:
			multiply(a, b);
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Invalid Choice");
	}
	return 0;
}
