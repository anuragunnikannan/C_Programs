#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	int n, key;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched: ");
	scanf("%d",&key);
	int low = 0, high = n-1;
	int f = 0;
	while(low <=high)
	{
		int mid = (low+high)/2;
		if(key < a[mid])
		{
			high = mid-1;
		}
		else if(key > a[mid])
		{
			low = mid+1;
		}
		else if(key==a[mid])
		{
			printf("Element found at %d",mid+1);
			f = 1;
			break;
		}
	}
	if(f==0)
	{
		printf("Element not found");
	}
	return 0;
}