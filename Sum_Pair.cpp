#include <stdio.h>
int main()
{
	int k;
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements:\n");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter key: ");
	scanf("%d",&k);
	printf("\nPairs are: ");
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1;j<n-1;j++)
		{
			int s = a[i]+a[j];
			if(s==k)
			{
				printf("(%d, %d) (%d, %d) ", a[i], a[j], a[j], a[i]);
			}
		}
	}
	return 0;
}
