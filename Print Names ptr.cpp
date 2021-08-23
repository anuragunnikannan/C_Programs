#include <stdio.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	char *p[100][n];
	for(int i = 0;i<n;i++)
	{
		scanf("%s",(p+i));
	}
	printf("\nNames:\n");
	for(int i = 0;i<n;i++)
	{
		printf("%s\n",*(p+i));
	}
	return 0;
}
