#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct triangle
{
	int a;
	int b;
	int c;
	double p;
	double s;
};
int main()
{
	int n;
	printf("Enter number of triangles: ");
	scanf("%d",&n);
	struct triangle tr[n], te[n];
	printf("Enter sides of %d triangles: ",n);
	for(int i = 0;i<n;i++)
	{
		scanf("%d %d %d",&tr[i].a, &tr[i].b, &tr[i].c);
	}
	for(int i = 0;i<n;i++)
	{
		tr[i].p = (tr[i].a + tr[i].b + tr[i].c)/2;
		tr[i].s = sqrt(tr[i].p*(tr[i].p-tr[i].a)*(tr[i].p-tr[i].b)*(tr[i].p-tr[i].c));
	}
	printf("\n");
	int z = 0;
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(tr[i].s > tr[j].s)
			{
				te[z] = tr[i];
				tr[i] = tr[j];
				tr[j] = te[z];
				z++;
			}
		}
	}
	for(int i = 0;i<n;i++)
	{
		printf("%d %d %d\n",tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
