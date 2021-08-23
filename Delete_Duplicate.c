#include <stdio.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter %d elements: ",n);
	int i, j, k;
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0;i<n;i++)
	{
		for(j = i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k = j;k<n;k++)
				{
					a[k] = a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	printf("\nNew Array:\n");
	for(i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
