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
    printf("Enter %d elements: \n",n);
    int i = 0, j = 0;
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(i = 0;i<n;i++)
    {
        for(j = i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted Array: \n");
    for(i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}