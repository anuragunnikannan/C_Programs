#include <stdio.h>
#include <string.h>
int main()
{
	char w[5][20];
	char t[20];
	printf("Enter 5 words: ");
	for(int i = 0;i<5;i++)
	{
		gets(w[i]);
	}
	for(int i = 0;i<4;i++)
	{
		for(int j = i+1;j<5;j++)
		{
			if(stricmp(w[i], w[j])>0)
			{
				strcpy(t, w[i]);
				strcpy(w[i], w[j]);
				strcpy(w[j], t);
			}
		}
	}
	printf("\nArranged Words\n");
	for(int i = 0;i<5;i++)
	{
		printf("%s\n",w[i]);
	}
	return 0;
}
