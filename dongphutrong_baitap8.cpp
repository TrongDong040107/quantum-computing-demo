#include <iostream>
#include <unordered_map>
using namespace std;

void findLargestSubarray(int arr[], int n)
{
    unordered_map<int, int> firstIndex;
    firstIndex[0] = -1;

    int sum = 0;
    int maxLength = 0;
    int endIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            sum--;
        }
        else
        {
            sum++;
        }

        if (firstIndex.find(sum) != firstIndex.end())
        {
            int currentLength = i - firstIndex[sum];

            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                endIndex = i;
            }
        }
        else
        {
            firstIndex[sum] = i;
        }
    }

    if (endIndex != -1)
    {
        int startIndex = endIndex - maxLength + 1;
        cout << "[" << startIndex << ", " << endIndex << "]" << endl;
    }
    else
    {
        cout << "No subarray exists" << endl;
    }
}

int main()
{
    int arr[] = {0, 0, 1, 0, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    findLargestSubarray(arr, n);

    return 0;
}
