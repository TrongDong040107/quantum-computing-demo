#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(const vector<int>& arr)
{
    int n = arr.size();
    vector<bool> seen(n + 1, false);

    for (int i = 0; i < n; i++)
    {
        int value = arr[i];

        if (seen[value])
        {
            return value;
        }

        seen[value] = true;
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4};

    int duplicate = findDuplicate(arr);

    if (duplicate != -1)
    {
        cout << "The duplicate element is " << duplicate << endl;
    }
    else
    {
        cout << "No duplicate element found" << endl;
    }

    return 0;
}
