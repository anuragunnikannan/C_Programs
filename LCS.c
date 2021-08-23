#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    char a[100];
    char b[100];
    printf("Enter 1st string: ");
    scanf("%s",&a);
    printf("Enter 2nd string: ");
    scanf("%s",&b);
    int m = strlen(a);
    int n = strlen(b);
    int lcs[m+1][n+1];
    int i = 0, j = 0;
    for(i = 0;i<=m;i++)
    {
        for(j = 0;j<=n;j++)
        {
            if(i==0||j==0)
            {
                lcs[i][j] = 0;
            }
            else if(a[i-1]==b[j-1])
            {
                lcs[i][j] = 1+lcs[i-1][j-1];
            }
            else
            {
                if(lcs[i-1][j] > lcs[i][j-1])
                {
                    lcs[i][j] = lcs[i-1][j];
                }
                else
                {
                    lcs[i][j] = lcs[i][j-1];
                }
            }
        }
    }
    printf("Longest Common Subsequence = %d",lcs[m][n]);
    return 0;
}