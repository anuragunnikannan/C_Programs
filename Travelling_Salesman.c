#include<stdio.h>
int dist[25][25];
int visited[25], n, cost = 0;
int tsp(int c)
{
    int i, next_city = 999;
    int min = 999, temp;
    for(i = 0; i < n; i++)
    {
        if((dist[c][i] != 0) && (visited[i] == 0))
        {
            if(dist[c][i] < min)
            {
                min = dist[i][0] + dist[c][i];
            }
            temp = dist[c][i];
            next_city = i;
        }
    }
    if(min != 999)
    {
        cost = cost + temp;
    }
    return next_city;
}
 
void min_cost(int city)
{
    int next_city;
    visited[city] = 1;
    printf("%d ", city + 1);
    next_city = tsp(city);
    if(next_city == 999)
    {
        next_city = 0;
        printf("%d ", next_city + 1);
        cost = cost + dist[city][next_city];
        return;
    }
    min_cost(next_city);
}
 
int main()
{ 
    int i, j;
    printf("Enter Total Number of Cities:\n");
    scanf("%d", &n);
    printf("Enter Cost Matrix\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &dist[i][j]);
        }
        visited[i] = 0;
    }
    printf("\n");
    min_cost(0);
    printf("\nMinimum Cost = %d",cost);
    return 0;
}