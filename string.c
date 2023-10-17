#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,n,len;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char str[10000];
        scanf("%s",str);
        len=strlen(str);
        for(j=0;j<len;j+=2)
        {
            printf("%c",str[j]);
        }
        printf(" ");
         for(j=1;j<len;j+=2)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}
