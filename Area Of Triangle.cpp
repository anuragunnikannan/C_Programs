#include <stdio.h>
int main()
{
	float x, y, z;
	printf("Enter height: ");
	scanf("%f",&x);
	printf("\nEnter base: ");
	scanf("%f",&y);
	printf("\nEnter 3rd side: ");
	scanf("%f",&z);
	float area = 0.0f;
	if((z*z)==(x*x)+(y*y))
	{
		area = (x*y)/2;
		printf("\nRight Angled Triangle");
	}
	else
	{
		area = (x*y)/2;
		printf("\nNot Right Angled Triangle");
	}
	printf("\nArea = %f",area);
	return 0;
}
