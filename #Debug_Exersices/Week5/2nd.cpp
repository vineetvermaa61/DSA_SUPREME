// Debug the code. This code tries to find first maximum occurring character.
#include <bits/stdc++.h>
using namespace std;
 
char maxOccurring(char* str)
{
    int count[256] = {0};
    int max = INT_MIN;
    char answer;
 
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            answer= str[i];
        }
    }
    return answer;
}

int main()
{
    char str[] = "sample string";
    cout << maxOccurring(str);
}

// GIVEN:
// #include <bits/stdc++.h>
// using namespace std;
 
// char maxOccurring(char* str)
// {
//     int count[256] = {0};
//     int max = INT_MAX;
//     char answer;
 
//     for (int i = 0; str[i] != '\0'; i++) {
//         count[str[i]]++;
//         if (max <= count[str[i]]) {
//             max = count[str[i]];
//             answer= str[i];
//         }
//     }
//     return answer;
// }

// int main()
// {
//     char str[] = "sample string";
//     cout << maxOccurring(str);
// }

// SOLUTION:
// #include <bits/stdc++.h>
// using namespace std;
 
// char maxOccurring(char* str)
// {
//     int count[256] = {0};
//     int max = 0; // Should be initialized with 0 or INT_MIN
//     char answer;
 
//     for (int i = 0; str[i] != '\0'; i++) {
//         count[str[i]]++;
//         if (max < count[str[i]]) { // we need to find first element which has maximum occurence so '<'
//             max = count[str[i]];
//             answer = str[i];
//         }
//     }
//     return answer;
// }

// int main()
// {
//     char str[] = "sample string";
//     cout << maxOccurring(str);
// }