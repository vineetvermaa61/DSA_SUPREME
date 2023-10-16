#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
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
// FIND DUPLICATE SUBTREES:
class Solution
{
public:
    vector<Node *> ans;
    unordered_map<string, int> nodeFrequencyMap;
    string preorder(Node *root)
    {
        if (!root)
            return "N";
        string curr = to_string(root->data);
        string l = preorder(root->left);
        string r = preorder(root->right);
        string s = curr + "," + l + "," + r;
        if (nodeFrequencyMap.find(s) != nodeFrequencyMap.end())
        {
            if (nodeFrequencyMap[s] == 1)
            {
                ans.push_back(root);
                nodeFrequencyMap[s]++;
            }
        }
        else
        {
            nodeFrequencyMap[s] = 1;
        }
        return s;
    }

    vector<Node *> findDuplicateSubtrees(Node *root)
    {
        preorder(root);
        return ans;
    }
};
int main()
{
    Node *root = NULL;
    root = buildTree();
    level_order_traversal(root);
    return 0;
}