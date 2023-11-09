#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,flag;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        flag=1;
        if(arr[j]==0||arr[j]==1)
        {
            flag=0;
        }
        else 
        {
            for(i=2;i<=arr[j]/2;i++)
            {
                if(arr[j]%i==0){
                    flag=0;
                    break;
                }
            }
        }
        if(flag==0)
        {
            printf("Not prime\n");
        }
        else 
        {
            printf("Prime\n");
        }
    
    }
    return 0;
}
