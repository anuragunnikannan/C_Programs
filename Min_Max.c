#include <stdio.h>
void merge(int arr[], int lower, int mid, int upper)
{
    int i, j, k;
    i = lower;
    j = mid+1;
    k = lower;
    int b[100];
    while(i<=mid && j<=upper)
    {
        if(arr[i] < arr[j]) 
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)           //copying remaining elements (if any) from left subarray
    {
        b[k] = arr[i];
        i++;
        k++;
    }
    while(j<=upper)         //copying remaining elements (if any) from right subarray
    {
        b[k] = arr[j];
        j++;
        k++;
    }
    for(i = lower;i<=upper;i++) //copying the sorted array to the main array
    {
        arr[i] = b[i];
    }
}

void mergesort(int arr[], int lower, int upper)
{
    if(lower < upper)
    {
        int mid = (lower+upper)/2;
        mergesort(arr, lower, mid); //left subarray
        mergesort(arr, mid+1, upper);   //right subarray
        merge(arr, lower, mid, upper);  //merging the subarray after sorting
    }
}

int main()
{
    int n, k;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter value of k:\n");
    scanf("%d",&k);
    int i = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergesort(arr, 0, n-1);
    int diff = arr[k-1]-arr[0];
    printf("%d",diff);
    return 0;
}