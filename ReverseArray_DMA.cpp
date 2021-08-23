#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Enter size of array: \n");
	scanf("%d",&n);
	int *ptr;
	ptr = (int*)calloc(n, sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to allocate memory");
		exit(0);
	}
	printf("Enter elements for array: \n");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\nReverse Array: \n");
	for(int i = n-1;i>=0;i--)
	{
		printf("%d\n",ptr[i]);
	}
	return 0;
}
