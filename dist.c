#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i, j;
	for(i = 0;i<t;i++)
	{
		int n, k;
		scanf("%d %d",&n, &k);
		int d = n;
		int x = (int)n/k;
		for(j = 1;j<=x;j++)
		{
			d = d + 2*j*k;
		}
		printf("%d\n",d);
	}
	return 0;
}
