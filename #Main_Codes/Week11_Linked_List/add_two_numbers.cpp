#include <iostream>
#include <vector>
using namespace std;

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head1 = l1;
        ListNode *head2 = l2;
        ListNode *ansHead = NULL;
        ListNode *ansTail = NULL;
        int carry = 0;

        if (head1 == NULL)
        {
            return head2;
        }
        if (head2 == NULL)
        {
            return head1;
        }

        // jaise hi ek null hoga andar likhi condition false ho jayegi
        while (head1 != NULL && head2 != NULL)
        {
            int sum = head1->val + head2->val + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *newNode = new ListNode(digit);
            if (ansHead == NULL)
            {
                ansHead = newNode;
                ansTail = newNode;
            }
            else
            {
                ansTail->next = newNode;
                ansTail = newNode;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        while (head1 != NULL)
        {
            int sum = head1->val + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *newNode = new ListNode(digit);
            ansTail->next = newNode;
            ansTail = newNode;
            head1 = head1->next;
        }

        while (head2 != NULL)
        {
            int sum = head2->val + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *newNode = new ListNode(digit);
            ansTail->next = newNode;
            ansTail = newNode;
            head2 = head2->next;
        }

        while (carry != 0)
        {
            int sum = carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *newNode = new ListNode(digit);
            ansTail->next = newNode;
            ansTail = newNode;
        }
        return ansHead;
    }
};
int main()
{

    return 0;
}