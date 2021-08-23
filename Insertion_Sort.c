#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    int i, j;
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    for(i = 1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;   //inserting the smallest element
    }
    printf("\nSorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}