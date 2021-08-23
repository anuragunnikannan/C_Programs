#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i = 0;i<t;i++)
	{
		int n, k, x, y;
		scanf("%d %d %d %d",&n, &k, &x, &y);
		int j = 0;
		while(x!=y && j<=100)
		{
			x = (x+k)%n;
			j++;
		}
		if(x==y)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
