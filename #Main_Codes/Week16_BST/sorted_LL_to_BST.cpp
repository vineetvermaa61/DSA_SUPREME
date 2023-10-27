#include <iostream>
#include <queue>
#include <vector>
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
//  I/P:    10 20 5 11 17 2 4 8 6 25 15 -1

//  O/P:    10
//          5 20
//          2 8 11 25
//          4 6 17
//          15

// INSERTION:
Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        // this is the first node we have to create
        root = new Node(data);
        return root;
    }
    if (root->data > data)
    {
        // insert in left
        root->left = insertIntoBST(root->left, data);
    }
    else
    { // insert in right
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
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

// CONVERT BST TO SORTED DOUBLY LINKED LIST:
void convertIntoSortedDLL(Node *root, Node *&head)
{
    // base case
    if (root == NULL)
        return;
    // right subtree into LL
    convertIntoSortedDLL(root->right, head);
    // attach root node
    root->right = head;
    if (head != NULL)
    {
        head->left = root;
    }
    // update head
    head = root;
    // cout << "head ka data: " << head->data << " ";
    // left subtree LL
    convertIntoSortedDLL(root->left, head);
}
Node *bstToSortedDLL(Node *root)
{
    Node *head = NULL;
    convertIntoSortedDLL(root, head);
    return head;
    // return root;
}

void printLL(Node *head)
{
    Node *temp = head;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;
}

// CONVERT SORTED LINKED LIST INTO BST:
Node *sortedLLToBST(Node *&head, int n)
{
    if (n <= 0 || head == NULL)
        return NULL;
    // cout << "left" << n << " ";
    Node *leftSubtree = sortedLLToBST(head, n / 2);
    // cout << "head-" << head->data << " ";
    Node *root = head;
    root->left = leftSubtree;
    head = head->right;
    // cout << "right"<< n << " ";
    root->right = sortedLLToBST(head, n - 1 - n / 2);
    return root;
}

int main()
{
    Node *root = NULL;
    cout << "Enter the data for the node: " << endl;
    takeInput(root);
    level_order_traversal(root);

    Node *newRoot = bstToSortedDLL(root);
    printLL(newRoot);
    int n;
    cout << endl
         << "No. of nodes: ";
    cin >> n;
    Node *newHead = sortedLLToBST(newRoot, n);
    cout << endl
         << "Printing tree again:" << endl;
    level_order_traversal(newHead);
    return 0;
}

// LEETCODE:

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
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
// class Solution {
// public:
//     int length(ListNode* head){
//         ListNode* temp = head;
//         int h = 0;
//         while(temp){
//             h++;
//             temp = temp->next;
//         }
//         return h;
//     }
//     TreeNode* covert_LL_to_BST(ListNode* &head, int n){
//         if(n<=0 || head == NULL) return NULL;
//         TreeNode* leftSubtree = covert_LL_to_BST(head,n/2);
//         TreeNode* root = new TreeNode(head->val);
//         root->left = leftSubtree;
//         head = head->next;
//         root->right = covert_LL_to_BST(head, n-1-n/2);
//         return root;
//     }
//     TreeNode* sortedListToBST(ListNode* head) {
//         int n = length(head);
//         return covert_LL_to_BST(head,n);
//     }
// };