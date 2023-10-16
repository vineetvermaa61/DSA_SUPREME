#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
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
// BURNING TREE:
class Solution
{
public:
    Node *makeNodeToParentMappingAndFindTargetNode(Node *root, unordered_map<Node *, Node *> &parentMap, int target)
    {
        queue<Node *> q;
        q.push(root);
        Node *targetNode = 0;
        parentMap[root] = 0;
        while (!q.empty())
        {
            Node *front = q.front();
            q.pop();
            // target node finding
            if (front->data == target)
            {
                targetNode = front;
            }
            if (front->left)
            {
                q.push(front->left);
                parentMap[front->left] = front;
            }
            if (front->right)
            {
                q.push(front->right);
                parentMap[front->right] = front;
            }
        }
        return targetNode;
    }
    int burnTheTree(Node *targetNode, unordered_map<Node *, Node *> &parentMap)
    {
        unordered_map<Node *, bool> isBurnt;
        queue<Node *> q;
        int T = 0;
        q.push(targetNode);
        isBurnt[targetNode] = 1;
        while (!q.empty())
        {
            int size = q.size();
            bool isFireSpreaded = 0;
            for (int i = 0; i < size; i++)
            {
                Node *front = q.front();
                q.pop();
                if (front->left && !isBurnt[front->left])
                {
                    q.push(front->left);
                    isBurnt[front->left] = 1;
                    isFireSpreaded = 1;
                }
                if (front->right && !isBurnt[front->right])
                {
                    q.push(front->right);
                    isBurnt[front->right] = 1;
                    isFireSpreaded = 1;
                }
                if (parentMap[front] && !isBurnt[parentMap[front]])
                {
                    q.push(parentMap[front]);
                    isBurnt[parentMap[front]] = 1;
                    isFireSpreaded = 1;
                }
            }
            if (isFireSpreaded)
                ++T;
        }
        return T;
    }
    int minTime(Node *root, int target)
    {
        unordered_map<Node *, Node *> parentMap; // Node->its parent pointers
        Node *targetNode = makeNodeToParentMappingAndFindTargetNode(root, parentMap, target);
        return burnTheTree(targetNode, parentMap);
    }
};
int main()
{
    Node *root = NULL;
    root = buildTree();
    level_order_traversal(root);
    return 0;
}