#include<stdio.h>
float func(float x,float y);
int main()
{
    float xn; 
    scanf("%f", &xn); // xn (i.e. the value of x) will be taken from test cases
	
	float x = 0.3, y = 5, k1 = 0, k2 = 0, k3 = 0, k4 = 0, h = 0.3;
	while(x < xn)
	{
		k1 = func(x, y);
		k2 = func(x + 0.5 * h, y + 0.5 * k1 * h);
		k3 = func(x + 0.5 * h, y + 0.5 * k2 * h);
		k4 = func(x + h, y + k3 * h);
		
		y += ((k1 + 2 * k2 + 2 * k3 + k4) * h) / 6;
		x += h;
	}
	printf("%f", y);
	return 0;
}

float func(float x, float y)
{
	return ((x * (x + 1) - (3 * y * y * y)) / 10);
}