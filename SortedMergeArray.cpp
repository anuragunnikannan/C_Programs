#include <stdio.h>
int main()
{
	int m, n;
	printf("Enter size of 1st array: ");
	scanf("%d",&m);
	int a[m];
	printf("\nEnter numbers for 1st array in sorted order: ");
	for(int i = 0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter size of 2nd array: ");
	scanf("%d",&n);
	int b[n];
	printf("\nEnter numbers for 2nd array in sorted order: ");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	int o = m+n;
	int c[o];
	int x = 0;
	for(int i = 0;i<m;i++)
	{
		c[x++] = a[i];
	}
	for(int i = 0;i<n;i++)
	{
		c[x++] = b[i];
	}
	int t = 0;
	for(int i = 0;i<o-1;i++)
	{
		for(int j = i+1;j<o;j++)
		{
			if(c[i] > c[j])
			{
				t = c[i];
				c[i] = c[j];
				c[j] = t;
			}
		}
	}
	printf("\nMerged Array: ");
	for(int i = 0;i<o;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
