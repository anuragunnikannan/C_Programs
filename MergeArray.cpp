#include <stdio.h>
int main()
{
	int m, n;
	printf("Enter no. of elements for first array: ");
	scanf("%d",&m);
	int a[m];
	printf("Enter elements for array: \n");
	for(int i = 0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter no. of elements for second array: ");
	scanf("%d",&n);
	int b[n];
	printf("Enter elements for array: \n");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nMerged Array\n");
	for(int i = 0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
	for(int i = 0;i<m;i++)
	{
		for(int j = 0;j<n;j++)
		{
			if(b[j]==a[i])
			{
				b[j] = '\0';
			}
		}
	}
	for(int i = 0;i<n;i++)
	{
		if(b[i]!='\0')
		{
			printf("%d ",b[i]);
		}
	}
	return 0;
}
