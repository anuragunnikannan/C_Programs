#include <stdio.h>
int main()
{
    float t[] = {10, 15, 18, 22, 30};
	float v[] = {22, 26, 35, 48, 68};
	float a;
	scanf("%f",&a);
	float k = 0.0;
	for(int i = 0; i < 5; i++)
	{
		float temp = 1.0;
		for(int j = 0; j < 5; j++)
		{
			if(i != j)
			{
				temp *= (a - t[j]) / (t[i] - t[j]);
			}
		}
		k += v[i] * temp;
	}
	printf("%.2f", k);
    return 0;
}