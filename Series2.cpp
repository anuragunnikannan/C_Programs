#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	int n;
	int s;
	printf("Enter value of x: ");
	scanf("%d",&x);
	printf("Enter number of terms: ");
	scanf("%d",&n);
	int p = 1;
	for(int i = 1;i<=n;i++)
	{
		if(i%2!=0)
		{
			int t = pow(x, p);
			s = s+t;
			printf("\n%d",t);
			p+=2;
		}
		else
		{
			int t = pow(x, p);
			s = s-t;
			printf("\n%d",(-t));
			p+=2;
		}
	}
	printf("\nSum = %d",s);
	return 0;
}
