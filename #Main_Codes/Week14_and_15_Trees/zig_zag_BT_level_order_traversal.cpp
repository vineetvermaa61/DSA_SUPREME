#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        queue<TreeNode *> q;
        q.push(root);
        bool LtoRdir = true;
        while (!q.empty())
        {
            int width = q.size();
            vector<int> currentLevel(width);
            for (int i = 0; i < width; i++)
            {
                TreeNode *front = q.front();
                q.pop();
                // agar flag true hai to aage se indexing karo nahi to peeche se
                int index = LtoRdir ? i : width - i - 1;
                currentLevel[index] = front->val;
                if (front->left)
                {
                    q.push(front->left);
                }
                if (front->right)
                {
                    q.push(front->right);
                }
            }
            // toggle the direction
            LtoRdir = !LtoRdir;
            ans.push_back(currentLevel);
        }
        return ans;
    }
};
int main()
{

    return 0;
}