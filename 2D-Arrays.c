#include <stdio.h>
int main() {
    int arr[6][6],i,j,sum=0;
    int maxSum = -63;

    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +arr[i + 1][j + 1] +arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            
            if (sum > maxSum) 
            {
                maxSum = sum;
            }
        }
    }
    printf("%d\n", maxSum);

    return 0;
}
