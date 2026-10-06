#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void mergeArrays(int x[], int y[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (x[i] > y[0])
        {
            swap(x[i], y[0]);

            int value = y[0];
            int j = 1;

            while (j < n && y[j] < value)
            {
                y[j - 1] = y[j];
                j++;
            }

            y[j - 1] = value;
        }
    }
}

int main()
{
    int x[] = {1, 4, 7, 8, 10};
    int y[] = {2, 3, 9};

    int m = sizeof(x) / sizeof(x[0]);
    int n = sizeof(y) / sizeof(y[0]);

    mergeArrays(x, y, m, n);

    cout << "X: ";
    printArray(x, m);

    cout << "Y: ";
    printArray(y, n);

    return 0;
}
