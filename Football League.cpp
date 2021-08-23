#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Team
{
	char name[100];
	int points;
	int gd;
	int gf;
};
int main()
{
	int n;
	printf("Enter number of teams: ");
	scanf("%d",&n);
	struct Team t[n], z[n];
	printf("\nEnter names of teams: ");
	for(int i = 0;i<n;i++)
	{
		scanf("%s",&t[i].name);
		t[i].points = 0;
		t[i].gd = 0;
		t[i].gf = 0;
	}
	int m;
	printf("\nEnter number of matches: ");
	scanf("%d",&m);
	for(int i = 0;i<m;i++)
	{
		char t1[100], t2[100];
		int g1, g2, pts;
		scanf("%s %s %d %d",&t1, &t2, &g1, &g2);
		int c = 0;
		if(strcmp(t1, t2)==0)
		{
			printf("Invalid Input");
			exit(0);
		}
		for(int j = 0;j<n;j++)
		{
			if(strcmp(t1, t[j].name)==0)
			{
				if(g1>g2)
				{
					pts = 2;
					//t[j].points = t[j].points + 2;
				}
				else if(g1==g2)
				{
					pts = 1;
					//t[j].points = t[j].points + 1;
				}
				else
				{
					pts = 0;
					//t[j].points = t[j].points + 0;
				}
				t[j].points = t[j].points + pts;
				t[j].gd = t[j].gd + (g1-g2);
				t[j].gf = t[j].gf + g1;
			}
		}
		pts = 0;
		for(int j = 0;j<n;j++)
		{
			if(strcmp(t2, t[j].name)==0)
			{
				if(g2>g1)
				{
					pts = 2;
					//t[j].points = t[j].points + 2;
				}
				else if(g2==g1)
				{
					pts = 1;
					//t[j].points = t[j].points + 1;
				}
				else
				{
					pts = 0;
					//t[j].points = t[j].points + 0;
				}
				t[j].points = t[j].points + pts;
				t[j].gd = t[j].gd + (g2-g1);
				t[j].gf = t[j].gf + g2;
			}
		}
	}
	int x = 0;
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(t[i].points < t[j].points)
			{
				z[x] = t[i];
				t[i] = t[j];
				t[j] = z[x];
				x++;
			}
			if(t[i].points == t[j].points)
			{
				if(t[i].gd < t[j].gd)
				{
					z[x] = t[i];
					t[i] = t[j];
					t[j] = z[x];
					x++;
				}
				else if(t[i].gf < t[j].gf)
				{
					z[x] = t[i];
					t[i] = t[j];
					t[j] = z[x];
					x++;
				}
				else if(strcmp(t[i].name, t[j].name)>0)
				{
					z[x] = t[i];
					t[i] = t[j];
					t[j] = z[x];
					x++;
				}
			}
		}
	}
	printf("\n");
	for(int i = 0;i<n;i++)
	{
		printf("%s	%d\n",t[i].name, t[i].points);
	}
	return 0;
}
