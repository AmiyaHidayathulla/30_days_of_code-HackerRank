#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int x;
    double y;
    char str[50];
    scanf("%d",&x);
    scanf("%lf",&y);
    scanf(" %[^\n^]",str);//input a suitable string that matches with the string 'HackerRank'
    printf("%d\n",i+x);
    printf("%.1f\n",d+y);
    printf("%s%s",s,str);
    return 0;
}
