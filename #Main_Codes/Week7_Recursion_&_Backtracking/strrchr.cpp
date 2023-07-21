#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "Scaler by InterviewBit";
    char ch = 'I';
    char *result = strchr(str, ch);
    if (result != NULL)
        cout << ch << " is present at the index " << result - str;
    else
        cout << ch << "is not present in the string";
    return 0;
}
