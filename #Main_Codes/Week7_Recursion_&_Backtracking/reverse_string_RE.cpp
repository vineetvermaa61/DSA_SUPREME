#include <iostream>
#include <vector>
using namespace std;
void reverseStringRE(string &str, int i, int j)
{
    // base case
    if (i > j)
    {
        return;
    }

    // 1 case solve kar do
    swap(str[i], str[j]);

    // baaki recursion sambhal lega

    reverseStringRE(str, i + 1, j - 1);
}
int main()
{
    string str = "hello";
    int i = 0;
    int j = str.length() - 1;

    reverseStringRE(str, i, j);

    cout << str;

    return 0;
}