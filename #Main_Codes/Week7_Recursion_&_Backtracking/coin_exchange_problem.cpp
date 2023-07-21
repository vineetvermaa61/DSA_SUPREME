#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &arr, int target)
{
    // base case
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MAX;
    }
    // let's solve 1 case
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {

        int ans = solve(arr, target - arr[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}
int main()
{
    vector<int> arr{1, 2, 3};
    int target = 5;

    int ans = solve(arr, target);

    cout << "Minimum coins required: " << ans << endl;

    return 0;
}

// // METHOD-2 : USING EXTRA SPACE
// #include <iostream>
// #include <vector>
// using namespace std;
// int solve(vector<int> &arr, int target, int output)
// {
//     // base case
//     if (target == output)
//     {
//         cout << "f3" << endl;
//         return 0;
//     }
//     if (output > target)
//     {
//         cout << "f4" << endl;
//         return INT_MAX;
//     }
//     // let's solve 1 case
//     int mini = INT_MAX;
//     for (int i = 0; i < arr.size(); i++)
//     {

//         cout << "f2" << endl;
//         int ans = solve(arr, target, output + arr[i]);
//         cout << "f5" << endl;
//         if (ans != INT_MAX)
//         {
//             mini = min(mini, ans + 1);
//         }
//     }
//     return mini;
// }
// int main()
// {
//     vector<int> arr{2, 3};
//     int target = 5;
//     int output = 0;
//     cout << "function called" << endl;
//     int ans = solve(arr, target, output);

//     cout << "Minimum coins required: " << ans << endl;

//     return 0;
// }