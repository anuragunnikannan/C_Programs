#include <stdio.h>
#include <math.h>
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
	float x;
	int n;
	printf("Series: 1-x^2/2!+x^4/4!....\n");
	printf("\nEnter value of x: ");
	scanf("%f",&x);
	printf("Enter number of terms: ");
	scanf("%d",&n);
	float s = 0.000000;
	int p = 0;
	for(int i = 1;i<=n;i++)
	{
		if(p%4==0)
		{
			s = s+((float)(pow(x, p))/(float)(fact(p)));
			p+=2;
		}
		else
		{
			s = s-((float)(pow(x, p))/(float)(fact(p)));
			p+=2;
		}
	}
	printf("\n Sum: %f\n", s);
	printf("\n No. of terms: %d", n);
	return 0;
}
