#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int m;
int n;
int adj[10][10];
int stack[10];
int visited[10];
int top = -1;
void dfs(int x)
{
    int i;
    for(i=0;i<m;i++)
    {
        if(adj[x][i] && !visited[i])
        {
            stack[++top] = i;
        }
    }
    if(top!=-1)
    {
        visited[stack[top]] = 1;
        dfs(stack[top--]);
    }
}
int main()
{
	printf("Enter M:");
    scanf("%d",&m);
    printf("Enter N:");
    scanf("%d",&n);
    int i, j;
    for(i = 0;i<m;i++)
    {
    	stack[i] = 0;
    	visited[i] = 0;
    }
    for(i = 0;i<m;i++)
    {
        for(j = 0;j<n;j++)
        {
            adj[i][j] = 0;
        }
    }
    for(i = 0;i<m;i++)
    {
        int x, y;
        scanf("%d %d",&x, &y);
        adj[x-1][y-1] = 1;
        adj[y-1][x-1] = 1;
    }
    int x;
    printf("Enter head:");
    scanf("%d",&x);
    dfs(x);
    int count = 0;
    for(i = 0;i<m;i++)
    {
        if(!visited[i])
        {
            count++;
        }
    }
    for(i = 0;i<m;i++)
    {
    	for(j = 0;j<n;j++)
    	{
    		printf("%d ",adj[i][j]);
    	}
    	printf("\n");
    }
    printf("%d",count);
    return 0;
}
