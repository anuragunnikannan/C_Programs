#include <stdio.h>
int main()
{
	int n, p, v;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements: ");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter value to be deleted: ");
	scanf("%d",&v);
	printf("\nEnter position: ");
	scanf("%d",&p);
	for(int i = p-1;i<n-1;i++)
	{
		a[i] = a[i+1];
	}
	printf("\nNew Array: ");
	for(int i = 0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
