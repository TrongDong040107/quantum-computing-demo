#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isConsecutive(int arr[], int left, int right, int minValue, int maxValue)
{
    if (maxValue - minValue != right - left)
    {
        return false;
    }

    vector<bool> seen(right - left + 1, false);

    for (int i = left; i <= right; i++)
    {
        int index = arr[i] - minValue;

        if (seen[index])
        {
            return false;
        }

        seen[index] = true;
    }

    return true;
}

void findLargestConsecutiveSubarray(int arr[], int n)
{
    int bestLength = 1;
    int start = 0;
    int end = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int minValue = arr[i];
        int maxValue = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            minValue = min(minValue, arr[j]);
            maxValue = max(maxValue, arr[j]);

            if (isConsecutive(arr, i, j, minValue, maxValue))
            {
                int currentLength = j - i + 1;

                if (currentLength > bestLength)
                {
                    bestLength = currentLength;
                    start = i;
                    end = j;
                }
            }
        }
    }

    cout << "The largest subarray is [" << start << ", " << end << "]" << endl;
}

int main()
{
    int arr[] = {2, 0, 2, 1, 4, 3, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    findLargestConsecutiveSubarray(arr, n);

    return 0;
}
