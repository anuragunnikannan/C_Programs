#include <stdio.h>
int main()
{
	int id;
	char n[20];
	int u;
	float a;
	float r;
	float s = 0.0;
	printf("Enter consumer id: ");
	scanf("%d",&id);
	printf("Enter name: ");
	scanf("%s",&n);
	printf("Enter units: ");
	scanf("%d",&u);
	if(u<=199)
	{
		r = 1.2;
	}
	else if(u>=200 && u<=400)
	{
		r = 1.5;
	}
	else if(u>400 && u<=600)
	{
		r = 1.8;
	}
	else
	{
		r = 2.0;
	}
	a = u*r;
	if(a<100)
	{
		a = 100;
	}
	else if(a>400)
	{
		s = 0.15*a;
	}
	printf("\nCustomer ID: %d",id);
	printf("\nCustomer Name: %s",n);
	printf("\nUnits: %d",u);
	printf("\nAmount charged @ Rs. %f per unit: %f",r, a);
	printf("\nSurcharge Amount: %f",s);
	a = a+s;
	printf("\nNet amount: %f",a);
	return 0;
}
