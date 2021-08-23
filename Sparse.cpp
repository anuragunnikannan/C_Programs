#include <stdio.h>
int main()
{
	int m, n;
	printf("Enter number of rows and columns: \n");
	scanf("%d %d",&m, &n);
	int a[m][n];
	printf("Enter %d elements: \n",(m*n));
	for(int i = 0;i<m;i++)
	{
		for(int j = 0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nOriginal Matrix: \n");
	for(int i = 0;i<m;i++)
	{
		for(int j = 0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int z = 0;
	for(int i = 0;i<m;i++)
	{
		for(int j = 0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				z++;
			}
		}
	}
	int f = 0;
	if(z>=((m*n)/2))
	{
		printf("\nSparse Matrix\n");
		f = 1;
	}
	else
	{
		printf("\nNot Sparse Matrix\n");
	}
	if(f==1)
	{
		int b[m+1][3];
		b[0][0] = m;
		b[0][1] = n;
		b[0][2] = z;
		int s = 1;
		for(int i = 0;i<m;i++)
		{
			for(int j = 0;j<n;j++)
			{
				if(a[i][j]!=0)
				{
					b[s][0] = i+1;
					b[s][1] = j+1;
					b[s][2] = a[i][j];
					s++;
				}
			}
		}
		printf("\nSparse Representation: \n");
		for(int i = 0;i<=m;i++)
		{
			for(int j = 0;j<3;j++)
			{
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
