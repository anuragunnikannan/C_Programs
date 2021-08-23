#include <stdio.h>
int add(int a, int b)
{
	int s = a+b;
	return s;
}
int subtract(int a, int b)
{
	int d = a-b;
	return d;
}
int multiply(int a, int b)
{
	int p = a*b;
	return p;
}
float divide(float a, float b)
{
	float q = (float)(a/b);
	return q;
}
int remainder(int a, int b)
{
	int r = a%b;
	return r;
}
int main()
{
	int x,y;
	int c;
	printf("Enter 1st number: ");
	scanf("%d",&x);
	printf("Enter 2nd number: ");
	scanf("%d",&y);
	printf("\n1. ADD");
	printf("\n2. SUBTRACT");
	printf("\n3. MULTIPLY");
	printf("\n4. DIVIDE");
	printf("\n5. REMAINDER");
	printf("\nEnter your choice: ");
	scanf("%d",&c);
	int res = 0;
	float res1;
	switch(c)
	{
		case 1:
			res = add(x, y);
			printf("Sum = %d",res);
			break;
		case 2:
			res = subtract(x, y);
			printf("Difference = %d",res);
			break;
		case 3:
			res = multiply(x, y);
			printf("Product = %d",res);
			break;
		case 4:
			res1 = divide(x, y);
			printf("Quotient = %f",res1);
			break;
		case 5:
			res = remainder(x, y);
			printf("Remainder = %d",res);
			break;
		default:
			printf("Invalid Choice!");
	}
	return 0;
}
