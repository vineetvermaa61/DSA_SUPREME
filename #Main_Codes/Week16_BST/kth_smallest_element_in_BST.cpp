
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
    int kthSmallest(TreeNode *root, int &k)
    {
        if (root == NULL)
            return -1;
        // inorder - sorted
        // l
        int leftAns = kthSmallest(root->left, k);
        if (leftAns != -1)
        {
            return leftAns;
        }
        // n
        k--;
        if (k == 0)
        {
            return root->val;
        }
        // r
        int rightAns = kthSmallest(root->right, k);
        {
            return rightAns;
        }
    }
};
// 5 lc
// 3 lc =>-1   k=0 => 3
// 2 lc =>-1   k=1  rc => -1 =>ret
// 1 lc => -1  k=2  rc => -1 =>ret
// -1 ret
int main()
{

    return 0;
}