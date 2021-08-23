#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t, n;
	scanf("%d",&t);
	for(int i = 1;i<=t;i++)
	{
		scanf("%d",&n);
		int *a = (int*)malloc(n*sizeof(int));
		int *f = (int*)malloc(n*sizeof(int));
		int v = -1;
		for(int j = 0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		a[4] = 1;
		for(int j = 0;j<n;j++)
		{
			int count = 1;
			for(int k = j+1;k<n;k++)
			{
				if(a[j]==a[k])
				{
					count++;
					f[k] = v;
				}
			}
			if(f[j]!=v)
			{
				f[j] = count;
			}
		}
		int m = n;
		for(int j = 0;j<m;j++)
		{
			for(int k = i+1;k<m;k++)
			{
				if(a[j]==a[k])
				{
					for(int l = k;l<m;l++)
					{
						a[l] = a[l+1];
					}
					m--;
					k--;
				}
			}
		}
		for(int j = 0;j<n;j++)
		{
			if(f[j]==-1)
			{
				for(int k = j;k<n;k++)
				{
					f[j] = f[j+1];
				}
				n--;
			}
		}
		for(int j = 0;j<n;j++)
		{
			for(int k = i+1;k<n;k++)
			{
				if(f[j]<f[k])
				{
					int t = f[j];
					int u = a[j];
					f[j] = f[k];
					a[j] = a[k];
					f[k] = t;
					a[k] = u;
				}
			}
		}
		for(int j = 0;j<n;j++)
		{
			printf("%d %d\n",a[j], f[j]);
		}
	}
	return 0;
}
