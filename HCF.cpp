#include <stdio.h>
int main()
{
	int n1, n2, hcf;
	printf("Enter 1st number: ");
	scanf("%d",&n1);
	printf("Enter 2nd number: ");
	scanf("%d",&n2);
	for(int i = 1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			hcf = i;
		}
	}
	printf("HCF is %d",hcf);
	return 0;
}
