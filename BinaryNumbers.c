#include<stdio.h>
int main()
{
    int n,count=0,total=0;
    scanf("%d",&n);
    
    while(n>0)
    {
        if(n%2==1)
        {
            count++;
            if(count>total)
            {
                total=count;
            }
        }
        else 
        {
            count=0;
        }
        n=n/2;
        
    }
    printf("%d\n",total);
    return 0;
}
