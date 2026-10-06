#include <iostream>
using namespace std;

void printZeroSumSubarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == 0)
            {
                cout << "Subarray [" << i << ", " << j << "]" << endl;
            }
        }
    }
}

int main()
{
    int arr[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printZeroSumSubarrays(arr, n);

    return 0;
}
