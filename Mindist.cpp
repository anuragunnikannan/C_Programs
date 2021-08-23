#include <stdio.h>
long hcf(long a, long b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return hcf(b, a%b);
	}
}
int main()
{
	long t;
	scanf("%ld",&t);
	for(long i = 0;i<t;i++)
	{
		long n;
		scanf("%ld",&n);
		long x = (long)((4*n)/(hcf(4*n, n+1)));
		printf("%ld\n",x);
	}
	return 0;
}
