#include<stdio.h>
float func(float x);
int main()
{
	int n=10; //Taking n=10 sub intervals
	float a,b,integral; //integral is the integration result
	scanf("%f",&a); // initial limit taken from test case 
	scanf("%f",&b); // Final limit taken from test case
	
	float h;
	if(b > a)
		h = (b - a) / 10;
	else
		h = (a - b) / 10;
	
	integral = func(a) + func(b);
	for(int i = 1; i < 10; i++)
	{
		integral += 2 * func(a + i * h);
	}
	integral *= (h/2);
	printf("%f",integral);
	return 0;
}

float func(float x)
{
    return x * x;
}