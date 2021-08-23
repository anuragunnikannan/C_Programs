#include <stdio.h>
#define ROWS 3
#define COLS 3
void input(int m[][COLS])
{
	int i, j;
	for(i = 0;i<ROWS;i++)
	{
		for(j = 0;j<COLS;j++)
		{
			scanf("%d",(*(m+i)+j));
		}
	}
}
void print(int m[][COLS])
{
	int i, j;
	for(i = 0;i<ROWS;i++)
	{
		for(j = 0;j<COLS;j++)
		{
			printf("%d ",*(*(m+i)+j));
		}
		printf("\n");
	}
}
int main()
{
	int m[ROWS][COLS];
	int i, j;
	printf("Enter %d elements: ",(ROWS*COLS));
	input(m);
	printf("\nMatrix:\n");
	print(m);
	return 0;
}
