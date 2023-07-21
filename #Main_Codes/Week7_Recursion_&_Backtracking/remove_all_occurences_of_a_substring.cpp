#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        // base case
        int position = s.find(part);
        if (position == string::npos)
        {
            return s;
        }
        // 1 case
        s.erase(position, part.length());
        // RE
        return removeOccurrences(s, part);

        // int position = s.find(part);
        // while(position != string::npos){
        //     s.erase(position, part.length());
        //     position = s.find(part);
        // }
        // return s;
    }
};

// // ANOTHER METHOD:
// class Solution {
// public:
//     void removeOccurr(string &s, string &part){
//         // 1 case
//         int position = s.find(part);
//         if(position != string::npos){
//             // part string has been located
//             // please remove it
//             string left_part = s.substr(0,position);
//             string right_part = s.substr(position + part.size(),s.size());
//             s = left_part + right_part;
//             // RE
//             removeOccurr(s,part);
//         }
//         else{
//             // Base Case
//             // all the occurences of part string has been removed from s
//             return;
//         }
//     }
//     string removeOccurrences(string s, string part) {
//         removeOccurr(s,part);
//         return s;
//     }
// };

int main()
{

    return 0;
}