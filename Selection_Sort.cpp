#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min;
    for(int i = 0;i<n-1;i++)
    {
        min = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("\nSorted Array:");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}