#include <stdio.h>

void findLongestSubarray(int arr[], int n, int target)
{
    int maxLength = 0;
    int startIndex = -1;
    int endIndex = -1;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == target)
            {
                int currentLength = j - i + 1;

                if (currentLength > maxLength)
                {
                    maxLength = currentLength;
                    startIndex = i;
                    endIndex = j;
                }
            }
        }
    }

    if (startIndex != -1)
    {
        printf("[%d, %d]\n", startIndex, endIndex);
    }
    else
    {
        printf("No subarray found\n");
    }
}

int main()
{
    int arr[] = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int target = 8;
    int n = sizeof(arr) / sizeof(arr[0]);

    findLongestSubarray(arr, n, target);

    return 0;
}
