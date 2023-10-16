#include <iostream>
#include <vector>
#include <deque>
using namespace std;
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        deque<int> q;
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            // peeche se chote element hatao aur bade lagao
            while (!q.empty() && nums[i] >= nums[q.back()])
            {
                q.pop_back();
            }
            // jab koi chota element mile to q ke peeche laga do
            // bada mile to tab tak pop karo jab tak usse aage
            // usse bada koi line mein na laga ho
            q.push_back(i);
        }
        // jab ye ho jaye to line mein jo sabse aage/bada element
        // hai use 'ans' mein daldo
        ans.push_back(nums[q.front()]);
        for (int i = k; i < nums.size(); i++)
        {
            // out of window
            if (!q.empty() && i - q.front() >= k)
            {
                q.pop_front();
            }
            // peeche se chote element hatao aur bade lagao
            while (!q.empty() && nums[i] >= nums[q.back()])
            {
                q.pop_back();
            }
            q.push_back(i);
            // har baar aage badhne par window slide hoga
            // to har baar 'ans' save karte raho
            ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};
int main()
{

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <deque>
// using namespace std;
// class Solution
// {
// public:
//     vector<int> maxSlidingWindow(vector<int> &nums, int k)
//     {
//         deque<int> dq;
//         vector<int> ans;
//         // first k window process
//         for (int i = 0; i < k; i++)
//         {
//             // chote elements remove kar do
//             while (!dq.empty() && nums[i] >= nums[dq.back()])
//             {
//                 dq.pop_back();
//             }
//             // inserting index so that we can checkout of window element
//             dq.push_back(i);
//         }
//         ans.push_back(nums[dq.front()]);
//         for (int i = k; i < nums.size(); i++)
//         {
//             // out of window elements ko remove kar do
//             if (!dq.empty() && i - dq.front() >= k)
//             {
//                 dq.pop_front();
//             }
//             while (!dq.empty() && nums[i] >= nums[dq.back()])
//             {
//                 // ab firse current element ke liye chote element ko remove karna hai
//                 dq.pop_back();
//             }
//             // inserting index so that we can checkout of window element
//             dq.push_back(i);
//             // current window ka answer store karna hai
//             ans.push_back(nums[dq.front()]);
//         }
//         return ans;
//     }
// };
// int main()
// {

//     return 0;
// }