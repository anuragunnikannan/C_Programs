#include <stdio.h>
#include <string.h>
#include <math.h>
struct Details
{
	char ID[1000];
	char name[1000];
	char address[1000];
	char ph[1000];
	char salary[1000];
};
int main()
{
	int n;
	printf("no. of entries: ");
	scanf("%d",&n);
	/*gets(a);
	int l = strlen(a);
	int n = 0;
	for(int i = 0;i<l;i++)
	{
		n = n+((a[l-(i+1)]-'0')*pow(10, i));
	}*/
	struct Details D[n];
	int i;
	for(i = 0;i<n;i++)
	{
		fflush(stdin);
		gets(D[i].ID);
		fflush(stdin);
		gets(D[i].name);
		fflush(stdin);
		gets(D[i].address);
		fflush(stdin);
		gets(D[i].ph);
		fflush(stdin);
		gets(D[i].salary);
	}
	printf("\n");
	for(i = 0;i<n;i++)
	{
		printf("%s\n",D[i].ID);
		printf("%s\n",D[i].name);
		printf("%s\n",D[i].address);
		printf("%s\n",D[i].ph);
		printf("%s\n",D[i].salary);
		printf("\n");
	}
	return 0;
}
