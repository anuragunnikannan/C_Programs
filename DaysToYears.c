#include <stdio.h>
int main()
{
	int days;
	int y, w, d;
	printf("Enter days: ");
	scanf("%d",&days);
	y = days/365;
	w = (days%365)/7;
	d = days-(y*365+w*7);
	printf("Years: %d\n",y);
	printf("Weeks: %d\n",w);
	printf("Days: %d\n",d);
	return 0;
}
