#include <stdio.h>
#include <stdlib.h>
int prime(int a)
{
	int c = 0;
	for(int i = 1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n, *ptr, e = 0, o = 0;
	int i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	ptr = (int*)calloc(n, sizeof(int));
	if(ptr == NULL)
	{
		printf("Unable to allocate memory: ");
		exit(0);
	}
	printf("Enter %d elements: \n",n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		if((*ptr+i)%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("Even Numbers frequency = %d\n",e);
	printf("Odd Numbers frequency = %d\n",o);
	ptr = (int*)realloc(ptr, (n+1)*sizeof(int));
	printf("Enter another number: ");
	scanf("%d",(ptr+n+1));
	for(int i = 0;i<=n;i++)
	{
		if(prime(*ptr+i)==1)
		{
			printf("\nPrime Number present");
			break;
		}
	}
	free(ptr);
	return 0;
}
