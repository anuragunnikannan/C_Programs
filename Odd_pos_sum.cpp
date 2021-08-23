#include <stdio.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements: \n",n);
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int s = 0;
	for(int i = 0;i<n;i++)
	{
		if((i+1)%2!=0)
		{
			s = s+a[i];
		}
	}
	printf("\nSum of elements in odd position = %d",s);
	return 0;
}
