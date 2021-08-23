#include <stdio.h>
int main()
{
	int n, f;
	int *p, *q;
	printf("Enter a number: ");
	scanf("%d",&n);
	p = &n;
	q = &f;
	*q = 1;
	for(int i = 1;i<=*p;i++)
	{
		*q = *q*i;
	}
	printf("Factorial = %d",f);
	return 0;
}
