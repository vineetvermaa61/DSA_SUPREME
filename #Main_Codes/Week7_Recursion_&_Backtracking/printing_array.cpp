// Printing Array
#include <iostream>
using namespace std;

void print_array(int arr[], int n, int i)
{
    // base case - rookna kab hai
    if (i >= n)
    {
        return;
    }

    // 1st case solve kar do
    cout << arr[i] << " ";
    // baaki recursion sambhal lega
    print_array(arr, n, i + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;
    print_array(arr, n, i);

    return 0;
}

// void print_array(int arr[], int n)
// {
//     // base case - rookna kab hai
//     if (n == 0)
//     {
//         return;
//     }

//     // 1st case solve kar do
//     cout << arr[0] << " ";
//     // baaki recursion sambhal lega
//     print_array(arr + 1, n - 1);
// }