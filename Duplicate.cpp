#include <stdio.h>
int main()
{
	int a[5];
	printf("Enter 5 elements: ");
	for(int i = 0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int c = 0;
	printf("\nNumber of duplicate elements: ");
	for(int i = 0;i<4;i++)
	{
		for(int j = i+1;j<5;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
	}
	printf(" %d",c);
	return 0;
}
