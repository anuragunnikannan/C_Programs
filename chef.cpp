#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i = 0;i<t;i++)
	{
		int n, k;
		scanf("%d %d",&n, &k);
		int a[n];
		int s = 0;
		for(int i = 0;i<n;i++)
		{
			scanf("%d",&a[i]);
			s = s+a[i];
		}
		int res = (int)s/k + 1;
		printf("%d\n",res);
	}
	return 0;
}
