#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t, n;
	scanf("%d",&t);
	int *a = (int*)malloc(1000*sizeof(int));
	int *b = (int*)malloc(1000*sizeof(int));
	int *s = (int*)malloc(1000*sizeof(int));
	if(t!=0)
	{
		int z = 0;
		while(z!=t)
		{
			scanf("%d",&n);
			for(int i = 0;i<n;i++)
			{
				a[i] = 0;
				b[i] = 0;
				s[i] = 0;
			}
			for(int i = 0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
			int c = 0;
			for(int i = n-1;i>=0;i--)
			{
				b[c++] = a[i];
			}
			for(int i = 0;i<n;i++)
			{
				s[c] = s[c]+a[i]+b[i];
				int d = s[c];
				if(s[c]>9)
				{
					s[c] = d%10;
					s[c-1] = d/10;
				}
				c--;
			}
			for(int i = 1;i<=n;i++)
			{
				printf("%d ",s[i]);
			}
			z++;
			printf("\n");
			free(a);
			free(b);
			free(s);
		}
	}
	else
	{
		printf("Program Ends");
	}
	return 0;
}
