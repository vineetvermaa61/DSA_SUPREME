#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
Node *buildTree()
{
    int data;
    cout << "Enter the data ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter the data for left part of " << data << " node" << endl;
    root->left = buildTree();
    cout << "Enter the data for right part of " << data << " node" << endl;
    root->right = buildTree();
    return root;
}
void level_order_traversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
vector<vector<int>> verticalTraversal(TreeNode *root)
{
    vector<vector<int>> ans;
    //  node ke correspomding row,col store kar rahe
    queue<pair<TreeNode *, pair<int, int>>> q; // Node, {row,col}
    q.push({root, {0, 0}});
    map<int, map<int, multiset<int>>> mp; // col -> {row: {x,y,z...}}
    while (!q.empty())
    {
        auto front = q.front();
        q.pop();
        TreeNode *&node = front.first;
        auto coordinate = front.second;
        int &row = coordinate.first;
        int &col = coordinate.second;
        mp[col][row].insert(node->val);
        if (node->left)
        {
            q.push({node->left, {row + 1, col - 1}});
        }
        if (node->right)
        {
            q.push({node->right, {row + 1, col + 1}});
        }
    }
    // store final vertical order into ans vector
    for (auto it : mp)
    {
        auto &colMap = it.second;
        vector<int> vLine;
        for (auto colMapIterator : colMap)
        {
            auto &mset = colMapIterator.second;
            vLine.insert(vLine.end(), mset.begin(), mset.end());
        }
        ans.push_back(vLine);
    }
    return ans;
}
int main()
{
    Node *root = NULL;
    root = buildTree();
    level_order_traversal(root);
    convertIntoSumTree(root);
    level_order_traversal(root);
    return 0;
}