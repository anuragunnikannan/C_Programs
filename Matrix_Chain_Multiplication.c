#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 999999
int mcm(int a[], int n)
{
    int cost[n][n];
    int i, j, k, l, min;
    for(i = 1;i<n;i++)
    {
        cost[i][i] = 0; //setting cost = 0 when there is only 1 matrix
    }
    for(l = 2;l<n;l++)
    {
        for(i=1;i<n-l+1;i++)
        {
            j = i+l-1;
            cost[i][j] = MAX;   //assigning maximum value to other positions (filling upper right triangle)
            for(k = i;k<=j-1;k++)
            {
                min = cost[i][k] + cost[k+1][j] + a[i-1]*a[k]*a[j];
                if(min < cost[i][j])    //checking for the minimum cost
                {
                    cost[i][j] = min;   //inserting minimum number of multiplication reqd
                }
            }
        }
    }
    return cost[1][n-1];
}

int main()
{
    int n;
    printf("Enter number of matrices: ");
    scanf("%d",&n);
    int m[n+1];
    int i = 0, x = 0, y = 0;
    scanf("%d %d",&x, &y);
    m[0] = x;
    m[1] = y;
    for(i = 2;i<=n;i++)
    {
        scanf("%d %d",&x, &y);
        m[i] = y;
    }
    printf("Minimum number of multiplications required = %d",mcm(m, n+1));
    return 0;
}