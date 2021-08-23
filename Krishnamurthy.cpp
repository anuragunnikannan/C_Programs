#include <stdio.h>
int fact(int a)
{
	int f = 1;
	for(int i = 1;i<=a;i++)
	{
		f*=i;
	}
	return f;
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int s = 0;
	int n1 = n;
	while(n>0)
	{
		int d = n%10;
		s = s+fact(d);
		n = n/10;
	}
	if(n1==s)
	{
		printf("Krishnamurthy number");
	}
	else
	{
		printf("Not Krishnamurthy number");
	}
	return 0;
}
