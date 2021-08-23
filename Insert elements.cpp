#include <stdio.h>
int main()
{
	int p, n, v;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements: ");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter value to be inserted: ");
	scanf("%d",&v);
	printf("\nEnter position: ");
	scanf("%d",&p);
	for(int i = n-1;i>=p-1;i--)
	{
		a[i+1] = a[i];
	}
	a[p-1] = v;
	printf("\nNew Array: ");
	for(int i = 0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
