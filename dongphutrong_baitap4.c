#include <stdio.h>

void sortBinaryArray(int arr[], int n)
{
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
    }

    for (int i = 0; i < zeroCount; i++)
    {
        arr[i] = 0;
    }

    for (int i = zeroCount; i < n; i++)
    {
        arr[i] = 1;
    }
}

int main()
{
    int arr[] = {0, 0, 1, 0, 1, 1, 0, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortBinaryArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
