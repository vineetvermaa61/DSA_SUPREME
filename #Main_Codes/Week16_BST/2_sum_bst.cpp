
#include <iostream>
#include <vector>
using namespace std;
//   Definition for a binary tree node.
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
    void getInorder(TreeNode *root, vector<int> &inorder)
    {
        if (root == NULL)
            return;
        getInorder(root->left, inorder);
        inorder.push_back(root->val);
        getInorder(root->right, inorder);
    }
    bool findTarget(TreeNode *root, int k)
    {
        // storing inorder traversal of BST -> sorted
        vector<int> inorder;
        getInorder(root, inorder);
        // using 2-pointer approach to check wheather target sum exist or not
        int start = 0;
        int end = inorder.size() - 1;
        while (start < end)
        {
            if (inorder[start] + inorder[end] == k)
            {
                return true;
            }
            else if (inorder[start] + inorder[end] > k)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return false;
    }
};
int main()
{

    return 0;
}