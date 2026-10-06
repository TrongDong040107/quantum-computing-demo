#include <iostream>
#include <unordered_set>
using namespace std;

bool hasZeroSumSubarray(int arr[], int n)
{
    unordered_set<int> sums;
    int sum = 0;

    sums.insert(0);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sums.find(sum) != sums.end())
        {
            return true;
        }

        sums.insert(sum);
    }

    return false;
}

int main()
{
    int arr[] = {4, 2, -3, -1, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (hasZeroSumSubarray(arr, n))
    {
        cout << "Subarray exists" << endl;
    }
    else
    {
        cout << "Subarray does not exist" << endl;
    }

    return 0;
}
