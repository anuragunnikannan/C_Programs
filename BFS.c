#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void bfs(int adj[][], int source, int destination)
{
    if(adj[])
}
int main()
{
    int t, n;
    int i, j, k, source, destination;
    printf("Enter t:");
    scanf("%d",&t);
    for(k = 1;k<=t;k++)
    {
        printf("Enter n:");
        scanf("%d",&n);
        int adj[n][n];
        for(i = 0;i<n;i++)
        {
            for(j = 0;j<n;j++)
            {
                scanf("%d",&adj[i][j]);
            }
        }
        printf("Enter source:");
        scanf("%d",&source);
        printf("Enter destination:");
        scanf("%d",&destination);
        int visited[n];
        int queue[n];
        int front = 0;
        int rear = -1;

    }
    return 0;
}