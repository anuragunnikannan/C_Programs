#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char *a;
	a = (char*)malloc(1024*sizeof(char));
	printf("Enter a string: ");
	scanf("%s", a);
	int x = 0;
	int l = strlen(a);
	int c[10] = {0};
	int i;
	for(i = 0;i<l;i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			c[(int)(a[i]-'0')]++;
		}
	}
	for(i = 0;i<10;i++)
	{
		printf("%d ",c[i]);
	}
	free(a);
	return 0;
}
