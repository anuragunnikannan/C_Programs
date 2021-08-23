#include <stdio.h>
float area;
int perimeter;
int ar_square(int a)
{
	area = a*a;
	return area;
}
int pe_square(int a)
{
	perimeter = 4*a;
	return perimeter;
}
int ar_rectangle(int l, int b)
{
	area =  l*b;
	return area;
}
int pe_rectangle(int l, int b)
{
	perimeter = 2*(l+b);
	return perimeter;
}
float ar_triangle(int b, int h)
{
	area = (b*h)/2;
	return area;
}
int pe_triangle(int b, int h, int c)
{
	perimeter = b+h+c;
	return perimeter;
}
int main()
{
	int ch;
	int a, l, b, x, y, z;
	printf("\n1. SQUARE");
	printf("\n2. RECTANGLE");
	printf("\n3. TRIANGLE");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter side of square: ");
			scanf("%d",&a);
			area = ar_square(a);
			perimeter = pe_square(a);
			printf("\nArea = %f",area);
			printf("\nPerimeter = %d",perimeter);
			break;
		case 2:
			printf("\nEnter length: ");
			scanf("%d",&l);
			printf("\nEnter breadth: ");
			scanf("%d",&b);
			area = ar_rectangle(l, b);
			perimeter = pe_rectangle(l, b);
			printf("\nArea = %f",area);
			printf("\nPerimeter = %d",perimeter);
			break;
		case 3:
			printf("\nEnter base: ");
			scanf("%d",&x);
			printf("\nEnter height: ");
			scanf("%d",&y);
			printf("Enter 3rd side: ");
			scanf("%d",&z);
			area = ar_triangle(x, y);
			perimeter = pe_triangle(x, y, z);
			printf("Area = %f",area);
			printf("Perimeter = %d",perimeter);
			break;
		default:
			printf("Invalid Choice!");
	}
	return 0;
}
