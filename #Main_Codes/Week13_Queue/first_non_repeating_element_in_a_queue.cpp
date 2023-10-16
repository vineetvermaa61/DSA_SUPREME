#include <iostream>
#include <vector>
#include <queue>
using namespace std;
string solve(string str)
{
    int freq[26] = {0};
    queue<char> q;
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // increase frequency
        freq[ch - 'a']++;
        // q.push
        q.push(ch);
        while (!q.empty())
        {
            if (freq[q.front() - 'a'] > 1)
            {

                // NOTE: FREQUENCY TO >1 HI RAHEGI WO DECREASE NAHIN HOGI, AUR POP HOTA RAHEGA
                // cout << "Q ka front: " << q.front() << "        Frequency: " << freq[q.front() - 'a'] << endl;
                q.pop();
            }
            // queue empty nahin hai, aur >1 wala case already check ho chuka hai, to == wala case hi bacha hai
            else
            {
                ans.push_back(q.front());
                // EDGE CASE:
                break;
            }
        }
        if (q.empty())
        {
            ans.push_back('#');
        }
    }
    return ans;
}
int main()
{
    string str = "aabc";
    // string str = "aaa";
    // string str = "aac";
    // string str = "ars";
    string ans = solve(str);
    cout << "Final Answer: " << ans << " " << endl;
    return 0;
}