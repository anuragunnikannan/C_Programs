#include <stdio.h>
float a,b,c,avg;
float inp_average()
{
	printf("Enter marks in subject1: ");
	scanf("%f",&a);
	printf("Enter marks in subject2: ");
	scanf("%f",&b);
	printf("Enter marks in subject3: ");
	scanf("%f",&c);
	avg = (a+b+c)/3;
	return avg;
}
int main()
{
	inp_average();
	printf("Average = %f",avg);
	return 0;
}
