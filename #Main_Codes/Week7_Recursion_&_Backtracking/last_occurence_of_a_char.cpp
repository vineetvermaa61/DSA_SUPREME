#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
// // going left to right
// int findLastOccurenceOfChar(string str, int i, int target, int ans)
// {
//     if (i >= str.length())
//     {
//         return ans;
//     }
//     if (str[i] == target)
//     {
//         ans = i;
//     }
//     return findLastOccurenceOfChar(str, i + 1, target, ans);
// }

// going right to left
void findLastOccurenceOfCharRTL(string &str, int i, int &target, int &ans)
{
    if (i < 0)
    {
        return;
    }
    if (str[i] == target)
    {
        ans = i;
        return;
    }
    return findLastOccurenceOfCharRTL(str, i - 1, target, ans);
}

int main()
{
    string str = "abcddedg";
    int ans = -1;
    int target = 'd';

    // int i = 0;
    // int index = findLastOccurenceOfChar(str, i, target, ans);
    // cout << index << endl;

    int i = str.size() - 1;
    findLastOccurenceOfCharRTL(str, i, target, ans);
    cout << ans << endl;

    // // // METHOD:3
    // char st[] = "abcddedg";
    // char *result = strrchr(st, 'd');
    // cout << (result - st) << endl;

    return 0;
}