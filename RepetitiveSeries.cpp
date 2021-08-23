#include <stdio.h>
int main()
{
	int n;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	int s = 0;
	int m = 9;
	for(int i = 1;i<=n;i++)
	{
		s = s+m;
		m = 9+m*10;
	}
	printf("Sum: %d",s);
	return 0;
}
