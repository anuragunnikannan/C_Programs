#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int A[n][n];
	int I[n][n];
	int r[n][n];
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			if(i==j)
			{
				I[i][j] = 1;
			}
			else
			{
				I[i][j] = 0;
			}
		}
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			r[i][j] = 0;
			for(int k = 0;k<n;k++)
			{
				r[i][j] = r[i][j]+A[i][k]*A[k][j];
			}
		}
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			r[i][j] = r[i][j] + A[i][j] + I[i][j];
		}
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			printf("%d\t",r[i][j]);
		}
		printf("\n");
	}
	return 0;
}
