#include <stdio.h>
int main()
{
	int a[5];
	printf("Enter 5 elements: ");
	for(int i = 0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int c = 0, d = 0, f = 0;
	while(true)
	{
		c = a[d];
		d = d+c;
		if(d==4)
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
