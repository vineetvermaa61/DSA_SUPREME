#include <iostream>
#include <vector>
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
    bool isMirror(TreeNode *p, TreeNode *q)
    {
        // when both nodes are null
        if (p == NULL && q == NULL)
            return true;
        // when both nodes are not null
        if (p != NULL && q != NULL)
        {
            return (p->val == q->val) && isMirror(p->left, q->left) && isMirror(p->right, q->right);
        }
        // when one node is null and other not
        return false;
    }
    bool isSymmetric(TreeNode *root)
    {
        isMirror(root->left, root->right);
    }
};