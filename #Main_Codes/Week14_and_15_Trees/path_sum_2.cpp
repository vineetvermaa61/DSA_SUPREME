#include <iostream>
#include <vector>
using namespace std;

//  Definition for a binary tree node.
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
    void solve(TreeNode *root, int targetSum, int currSum, vector<int> path, vector<vector<int>> &ans)
    {
        // base case:
        if (root == NULL)
        {
            return;
        }
        // Leaf node:
        if (root->left == NULL && root->right == NULL)
        {
            // include current node
            path.push_back(root->val);
            currSum += root->val;
            // check for target sum
            if (currSum == targetSum)
            {
                ans.push_back(path);
            }
            return;
        }
        // Include current node
        path.push_back(root->val);
        currSum += root->val;
        solve(root->left, targetSum, currSum, path, ans);
        solve(root->right, targetSum, currSum, path, ans);
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<vector<int>> ans;
        int sum = 0;
        vector<int> path;
        solve(root, targetSum, sum, path, ans);
        return ans;
    }
};
int main()
{

    return 0;
}

// BACKTRACKING:
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution
// {
// public:
//     void solve(TreeNode *root, int targetSum, int &currSum, vector<int> &path, vector<vector<int>> &ans)
//     {
//         // base case:
//         if (root == NULL)
//         {
//             return;
//         }
//         // Leaf node:
//         if (root->left == NULL && root->right == NULL)
//         {
//             // include current node
//             path.push_back(root->val);
//             currSum += root->val;
//             // check for target sum
//             if (currSum == targetSum)
//             {
//                 ans.push_back(path);
//             }
//             // backtrack
//             path.pop_back();
//             currSum -= root->val;
//             return;
//         }
//         // Include current node
//         path.push_back(root->val);
//         currSum += root->val;
//         solve(root->left, targetSum, currSum, path, ans);
//         solve(root->right, targetSum, currSum, path, ans);
//         // backtrack
//         path.pop_back();
//         currSum -= root->val;
//     }
//     vector<vector<int>> pathSum(TreeNode *root, int targetSum)
//     {
//         vector<vector<int>> ans;
//         int sum = 0;
//         vector<int> path;
//         solve(root, targetSum, sum, path, ans);
//         return ans;
//     }
// };