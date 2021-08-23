#include <stdio.h>
#include <math.h>
int main()
{
	int n, x;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	printf("Enter value of x: ");
	scanf("%d",&x);
	float sum = 1.0f;
	int p = 3;
	for(int i = 2;i<=n;i++)
	{
		
		sum += (float)(1/pow(x, p));
		p+=2;
	}
	printf("\nSum = %f",sum);
	return 0;
}
