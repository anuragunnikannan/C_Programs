#include <stdio.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter %d elements: \n",n);
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int f, s;
	f = s = a[0];
	for(int i = 0;i<n;i++)
	{
		if(a[i]>f)
		{
			s = f;
			f = a[i];
		}
		else if(a[i]>s && a[i]<f)
		{
			s = a[i];
		}
	}
	printf("\nSecond Largest = %d",s);
	return 0;
}
