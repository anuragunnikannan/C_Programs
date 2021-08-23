#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *a;
	a = (int*)calloc(50, sizeof(int));
	printf("Enter elements: ");
	int i = 0;
	while(a!=NULL)
	{
		scanf("%d",a+i);
		i++;
	}
	for(int i = 0;i<5;i++)
	{
		printf("%d ",a+i);
	}
	int c = 0, d = 0, f = 0;
	while(true)
	{
		c = a[d];
		d = d+c;
		if(c==-1)
		{
			f = 1;
			break;
		}
		else
		{
			if(c==0)
			{
				break;
			}
			f = 0;
		}
	}
	if(f==1)
	{
		printf("\nTrue");
	}
	else
	{
		printf("\nFalse");
	}
	return 0;
}
