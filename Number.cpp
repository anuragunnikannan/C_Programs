#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],in[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        in[i]=-1;
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                in[j]=0;
            }
            
            
        }
    }
    for(int i=0;i<n;i++){
        if(in[i]!=0){
            printf("%d",a[i]);
        }
    }

    return 0;
}
