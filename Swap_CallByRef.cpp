#include <stdio.h>
void swap(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int a, b;
	printf("Enter value of A: ");
	scanf("%d",&a);
	printf("Enter value of B: ");
	scanf("%d",&b);
	printf("\nBefore Swapping- A = %d, B = %d",a,b);
	swap(&a, &b);
	printf("\nAfter Swapping- A = %d, B = %d",a,b);
	return 0;
}
