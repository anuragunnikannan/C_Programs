#include <stdio.h>
int main()
{
	int x, y, *l, *p, *q;
	printf("Enter 1st number: ");
	scanf("%d",&x);
	printf("Enter 2nd number: ");
	scanf("%d",&y);
	p = &x;
	q = &y;
	if(*p>*q)
	{
		l = p;
	}
	else
	{
		l = q;
	}
	printf("Largest = %d",*l);
	return 0;
}
