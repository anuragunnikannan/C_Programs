#include <stdio.h>
int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements: ",n);
	int i;
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int s = 0;
	for(i = 0;i<n;i++)
	{
		s = s+a[i];
	}
	float avg = (float)s/n;
	printf("\nAverage = %f",avg);
	return 0;
}
