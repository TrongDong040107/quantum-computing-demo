#include <iostream>
#include <stack>
using namespace std;

struct Task
{
    int n;
    char source;
    char auxiliary;
    char destination;
    int state;
};

void hanoiNonRecursive(int n)
{
    stack<Task> tasks;

    tasks.push({n, 'A', 'B', 'C', 0});

    while (!tasks.empty())
    {
        Task current = tasks.top();
        tasks.pop();

        if (current.n == 1)
        {
            cout << "Move disk 1 from "
                 << current.source << " to "
                 << current.destination << endl;
            continue;
        }

        if (current.state == 0)
        {
            tasks.push({
                current.n,
                current.source,
                current.auxiliary,
                current.destination,
                1
            });

            tasks.push({
                current.n - 1,
                current.source,
                current.destination,
                current.auxiliary,
                0
            });
        }
        else
        {
            cout << "Move disk " << current.n
                 << " from " << current.source
                 << " to " << current.destination << endl;

            tasks.push({
                current.n - 1,
                current.auxiliary,
                current.source,
                current.destination,
                0
            });
        }
    }
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Number of disks must be greater than 0." << endl;
        return 0;
    }

    hanoiNonRecursive(n);

    return 0;
}
