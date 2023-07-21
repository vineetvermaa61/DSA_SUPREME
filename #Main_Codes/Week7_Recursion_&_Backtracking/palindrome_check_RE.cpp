#include <iostream>
#include <vector>
using namespace std;
bool checkPalindrome(string &s, int i, int j)
{
    // base case
    if (i >= j)
    {
        return true;
    }
    // 1 case
    if (s[i] != s[j])
    {
        return false;
    }
    // RE
    checkPalindrome(s, i + 1, j - 1);
    return true;

    // return checkPalindrome(s, i + 1, j - 1);
}
int main()
{
    string s = "abba";
    int j = s.size() - 1;
    int i = 0;
    if (checkPalindrome(s, i, j))
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
    return 0;
}