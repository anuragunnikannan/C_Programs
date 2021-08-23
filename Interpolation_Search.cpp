#include <stdio.h>
int interpolation(int arr[], int n, int x)
{
	int l = 0, h = n-1;
	while(l<=h && x>=arr[l] && x<=arr[h])
	{
		if(l==h)
		{
			if(arr[l]==x)
			{
				return l;
			}
			return -1;
		}
		int p = l + ((x-arr[l])*(h-l)/(arr[h]-arr[l]));
		if(arr[p]==x)
		{
			return p;
		}
		if(arr[p]<x)
		{
			l = p+1;
		}
		else
		{
			h = p-1;
		}
	}
	return -1;
}
int main()
{
	int n, key;
	scanf("%d",&n);
	scanf("%d",&key);
	int a[n];
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(interpolation(a, n, key)!=-1)
	{
		printf("found");
	}
	else
	{
		printf("not found");
	}
	return 0;
}
