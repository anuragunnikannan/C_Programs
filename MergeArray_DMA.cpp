#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m, n;
	int s = m+n;
	printf("Enter size for 1st array: \n");
	scanf("%d",&m);
	printf("\nEnter size for 2nd array: \n");
	scanf("%d",&n);
	int *p, *q, *r;
	p = (int*)calloc(m, sizeof(int));
	q = (int*)calloc(n, sizeof(int));
	r = (int*)calloc(s, sizeof(int));
	if(p==NULL)
	{
		printf("Unable to allocate memory for 1st array");
		exit(0);
	}
	if(q==NULL)
	{
		printf("Unable to allocate memory for 2nd array");
		exit(0);
	}
	printf("\nEnter elements for 1st array: \n");
	int x = 0;
	for(int i = 0;i<m;i++)
	{
		scanf("%d",p+i);
		r[x++]=p[i];
	}
	printf("\nEnter elements for 2nd array: \n");
	for(int j = 0;j<n;j++)
	{
		scanf("%d",q+j);
		r[x++] = q[j];
	}
	printf("\nMerged Array: \n");
	for(int j = 0;j<s;j++)
	{
		if(r[j]!=0)
		printf("%d\n",r[j]);
	}
	free(p);
	free(q);
	free(r);
	return 0;
}
