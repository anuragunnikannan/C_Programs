#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int partition(int arr[], int lower, int upper)
{
    int pivot = arr[lower]; //taking 1st element as pivot
    int i = lower + 1;      //next element to pivot
    int j = upper;
    int temp;
    do
    {
        while (arr[i] <= pivot) //finding element that is greater than pivot
        {
            i++;
        }
        while (arr[j] > pivot) //finding element that is less than pivot
        {
            j--;
        }
        if (i < j) //swapping values of i and j when they didn't cross each other
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    //Swapping value of pivot and j when i and j cross each other. Here arr[lower] is the pivot.
    temp = arr[lower];
    arr[lower] = arr[j];
    arr[j] = temp;
    return j;
}

void quicksort(int arr[], int lower, int upper)
{
    int partitionIndex; //index of pivot after partition
    if (lower < upper)
    {
        partitionIndex = partition(arr, lower, upper);
        quicksort(arr, lower, partitionIndex - 1); //sort left subarray
        quicksort(arr, partitionIndex + 1, upper); //sort right subarray
    }
}

void printarr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original Array:\n");
    printarr(arr, n);
    quicksort(arr, 0, n - 1);
    printf("\nSorted Array:\n");
    printarr(arr, n);
    return 0;
}