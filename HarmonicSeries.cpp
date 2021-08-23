#include <stdio.h>
int main()
{
	int n;
	float s = 1.000000;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	printf("Series: \n");
	printf("1 + ");
	for(int i = 2;i<=n;i++)
	{
		printf(" 1/%d + ",i);
		s = s+((float)1/(float)i);
	}
	printf("\nSum = %f",s);
	return 0;
}
