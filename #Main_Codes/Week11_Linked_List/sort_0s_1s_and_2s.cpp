// #include <iostream>
// #include <vector>
// using namespace std;
// // Following is the class structure of the Node class:

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()
//     {
//         this->data = 0;
//         next = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     Node(int data, Node *next)
//     {
//         this->data = data;
//         this->next = next;
//     }
// };

// Node *sortList(Node *head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     if (head->next == NULL)
//     {
//         return head;
//     }
//     // >1 node present in LL
//     Node *temp = head;
//     int zeros, ones, twos;
//     ones = twos = zeros = 0;
//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             zeros++;
//         }
//         if (temp->data == 1)
//         {
//             ones++;
//         }
//         if (temp->data == 2)
//         {
//             twos++;
//         }
//         temp = temp->next;
//     }

//     temp = head;
//     while (zeros--)
//     {
//         temp->data = 0;
//         temp = temp->next;
//     }
//     while (ones--)
//     {
//         temp->data = 1;
//         temp = temp->next;
//     }
//     while (twos--)
//     {
//         temp->data = 2;
//         temp = temp->next;
//     }
//     return head;
// }
// int main()
// {

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
// Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *sortList(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }
    // creating dummy nodes
    Node *zeroHead = new Node(-101);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-101);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-101);
    Node *twoTail = twoHead;

    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if (curr->data == 1)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            oneTail->next = temp;
            oneTail = temp;
        }
        else if (curr->data == 2)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            twoTail->next = temp;
            twoTail = temp;
        }
    }

    // remove dummy nodes from 1 aur 2 wali LL
    Node *temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;

    if (oneHead != NULL)
    {
        zeroTail->next = oneHead;
        if (twoHead != NULL)
        {
            oneTail->next = twoHead;
        }
    }
    else
    {
        if (twoHead != NULL)
        {
            zeroTail->next = twoHead;
        }
    }

    // remove dummy node from 0 wali LL
    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    return zeroHead;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(1);
    Node *second = new Node(0);
    Node *third = new Node(2);
    Node *fourth = new Node(1);
    Node *fifth = new Node(0);
    Node *sixth = new Node(2);
    Node *seventh = new Node(1);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    print(head);
    Node *temp = sortList(head);
    print(temp);
    return 0;
}