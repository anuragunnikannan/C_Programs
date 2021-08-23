#include <stdio.h>
void print(int *l, int s)
{
	int *h = (l+s-1);
	while(l<=h)
	{
		printf("%d ",*l);
		l++;
	}
}
int main()
{
	int s;
	printf("Enter size of array: ");
	scanf("%d",&s);
	int a[s];
	int *l = a;
	int *r;
	r = &a[s-1];
	printf("Enter %d elements: ",s);
	while(l<=r)
	{
		scanf("%d", l++);
	}
	printf("\nOriginal Array: ");
	print(a, s);
	l = a;
	while(l<r)
	{
		*l ^= *r;
		*r ^= *l;
		*l ^= *r;
		l++;
		r--;
	}
	printf("\nReversed Array: ");
	print(a, s);
	return 0;
}
