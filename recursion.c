#include <stdio.h>
 int factorial(int i);
int main() {
    int n;
    int fact=0;
    scanf("%d",&n);
    fact=factorial(n);
    printf("%d",fact);
    return 0;
}

 int factorial(int i)
    {
        int fact=0;
        if(i==1)
        {
            return 1;
        }
        else
        {
            fact=i*factorial(i-1);
            return fact;
        }
    }
