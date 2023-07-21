#include <iostream>
#include <vector>
using namespace std;
void printPermutationString(string &str, int i)
{
    // base case
    if (i >= str.length())
    {
        cout << str << " ";
        return;
    }

    // swapping
    for (int j = i; j < str.length(); j++)
    {
        // swap
        swap(str[j], str[i]);
        // recursive call
        printPermutationString(str, i + 1);
        // backtracking - to racreate the original input string
        swap(str[j], str[i]);
    }
}
int main()
{
    string str = "abc";
    int i = 0;
    printPermutationString(str, i);
    return 0;
}