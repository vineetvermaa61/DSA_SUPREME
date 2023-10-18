#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i = i + 2)
    {
        cout << i << " ";
    }

    cout << endl
         << "Alternate Method" << endl;
    for (int j = 1; j <= n; j++)
    {
        if (j % 2 == 0)
        {
            cout << j << " ";
        }
    }

    return 0;
}

// adding new change 2