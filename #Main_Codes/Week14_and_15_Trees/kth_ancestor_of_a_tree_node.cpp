#include <iostream>
#include <vector>
#include <queue>
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

// // KTH ANCESTOR OF A TREE
// bool kthAncestor(Node *root, int &k, int p)
// {
//     // k - steps,   p - target node
//     // base case:
//     if (root == NULL)
//     {
//         return false;
//     }
//     if (root->data == p)
//     {
//         return true;
//     }
//     bool leftAns = kthAncestor(root->left, k, p);
//     bool rightAns = kthAncestor(root->right, k, p);
//     if (leftAns || rightAns)
//     {
//         k--;
//     }
//     if (k == 0)
//     {
//         cout << "kth ancestor is " << root->data << " " << endl;
//         k = -1;
//     }
//     // MARK K AS -1 , FOR CAUTION
//     return leftAns || rightAns;
// }

// METHOD-2: USING VECTOR
bool kthAncestor(Node *root, int &k, int p, vector<int> &v)
{
    // k - steps,   p - target node
    // base case:
    if (root == NULL)
    {
        return false;
    }
    if (root->data == p)
    {
        int i = v.size() - 1;
        while (k--)
        {
            if (k == 0)
            {
                cout << v[i] << " ";
            }
            i--;
        }
        return true;
    }
    v.push_back(root->data);
    bool leftAns = kthAncestor(root->left, k, p, v);
    bool rightAns = kthAncestor(root->right, k, p, v);
    v.pop_back();
    return leftAns || rightAns;
}

int main()
{
    Node *root = NULL;
    root = buildTree();
    level_order_traversal(root);

    cout << "Kth ancestor: " << endl;
    int steps;
    cout << "Enter steps: ";
    cin >> steps;
    int target;
    cout << "Enter target: ";
    cin >> target;
    // kthAncestor(root, steps, target);

    // METHOD-2 : using vector
    vector<int> v;
    kthAncestor(root, steps, target, v);
    return 0;
}

// GFG:

// // your task is to complete this function
// bool kthAncestor2(Node *root, int &k, int p,int &n)
// {
//     if (root == NULL)
//     {
//         return false;
//     }
//     if (root->data == p)
//     {
//         return true;
//     }
//     bool leftAns = kthAncestor2(root->left, k, p,n);
//     bool rightAns = kthAncestor2(root->right, k, p,n);
//     if (leftAns || rightAns)
//     {
//         k--;
//     }
//     if (k == 0)
//     {
//         // cout << "kth ancestor is " << root->data << " " << endl;
//         n = root->data;
//         k = -1;
//     }
//     // MARK K AS -1 , FOR CAUTION
//     return leftAns || rightAns;
// }
// int kthAncestor(Node *root, int k, int node)
// {
//     int n = -1;
//     kthAncestor2(root,k, node ,n);
//     return n;
// }