#include<stdio.h>
#include<stdlib.h>
#define VAL 999
int i,j,k,a,b,u,v,m, n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
// union - find 
int find(int i)
{
    while(parent[i])
    i=parent[i];
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
int main()
{
    scanf("%d %d",&n, &m);
    for(i=0;i<m;i++)
    {
        int x, y, w;
        scanf("%d %d %d",&x, &y, &w);
        cost[x-1][y-1] = w;
    }
    for(i=0;i<n;i++)
    {
        for(j = 0;j<n;j++)
        {
            if(cost[i][j]=='\0')
            {
                cost[i][j] = VAL;
            }
        }
    }
    while(ne < n)
    {
        for(i=0,min=VAL;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(cost[i][j] < min)
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            ne++;
            mincost +=min;
        }
        cost[a][b]=cost[b][a]=999;
    }
    // minimum cost
    printf("%d",mincost);
    return 0;
}