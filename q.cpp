#include <stdio.h>
int main()
{
	int n = 5;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i = 0;i<n;i++)
	{
		if(a[i]==-1)
		{
			for(int j = i;j<n;j++)
			{
				a[j] = a[j+1];
			}
			n--;
		}
	}
	for(int i = 0;i<sizeof(a)/sizeof(int);i++)
	{
		if(a[i]!=NULL)
		{
			printf("%d\n",a[i]);
		}
	}
	return 0;
}
