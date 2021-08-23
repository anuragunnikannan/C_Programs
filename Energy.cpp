#include <stdio.h>
#include <stdlib.h>

int findmax(int arr[], int n)
{
    int i;  
    int max = arr[0];    
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 

}

int main()
{
    int *inp, i, j;
    inp = (int *)malloc(2 * sizeof(int));
    for(i=0;i<2;i++)
    {
        scanf("%d", &inp[i]);
    }
    int n = inp[0], d = inp[1];
    int *energies;
    energies = (int *)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d", &energies[i]);
    }
    int *actions;
    actions = (int *)malloc(3 * sizeof(int));
    int results[d];
    for(i=1;i<=d;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d", &actions[j]);
        if(actions[0] == 1)
        {
            energies[actions[1] - 1] += actions[2];
            results[i-1] = findmax(energies, n);
        }
        else
        {
            if(energies[actions[1] - 1] < energies[actions[2] - 1])
            {
                energies[actions[2] - 1] += energies[actions[1] - 1];
                energies[actions[1] - 1] = 0;
                results[i-1] = findmax(energies, n);
            }   
            else if(energies[actions[1] - 1] > energies[actions[2] - 1])
            {
                energies[actions[1] - 1] += energies[actions[2] - 1];
                energies[actions[2] - 1] = 0;
                results[i-1] = findmax(energies, n);
            }
            else
            {
                results[i-1] = findmax(energies, n);
            }
            
        }    
    }

    for(i=0;i<d;i++)
    {
        printf("%d\n", results[i]);
    }
    return 0;
}
