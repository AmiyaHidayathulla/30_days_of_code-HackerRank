#include <stdio.h>
void bubbleSort(int arr[], int n) 
{
    int numSwaps = 0;
    for (int i = 0; i < n; i++) 
    {
        int count = 0;
        for (int j = 0; j < n - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
                numSwaps++;
            }
        }
        if (count == 0) 
        {
            break; 
        }
    }

    printf("Array is sorted in %d swaps.\n", numSwaps);
    printf("First Element: %d\n", arr[0]);
    printf("Last Element: %d\n", arr[n - 1]);
}

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    return 0;
}
