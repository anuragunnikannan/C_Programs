#include <stdio.h>
int add(int *x, int *y)
{
	int s;
	s = *x+*y;
	return s;
}
int main()
{
	int a, b, s;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	s = add(&a, &b);
	printf("Sum = %d",s);
	return 0;
}
