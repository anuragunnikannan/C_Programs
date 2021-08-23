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
    int c;
    printf("\n1. Bubble Sort");
    printf("\n2. Insertion Sort");
    printf("\nEnter your choice: ");
    scanf("%d",&c);
    int temp, key;
    switch(c)
    {
        case 1:
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
        break;
        case 2:
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
        break;
        default:
        printf("Invalid Choice!");
    }
    printf("\nSorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}