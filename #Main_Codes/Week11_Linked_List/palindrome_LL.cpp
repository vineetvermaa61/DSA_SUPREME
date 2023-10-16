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
    ListNode *reverse(ListNode *&head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while (curr != nullptr)
        {
            ListNode *forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    bool isPalindrome(ListNode *head)
    {
        // StepA: find middle node
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast != nullptr)
        {
            fast = fast->next;
            if (fast != nullptr)
            {
                fast = fast->next;
                slow = slow->next;
            }
        }
        // now slow represents middle of LL
        // StepB: reverse LL after middle node
        ListNode *reverseLLKaHead = reverse(slow->next);
        slow->next = reverseLLKaHead;
        // now reverse LL attached
        // StepC: start comparison
        ListNode *temp1 = head;
        ListNode *temp2 = reverseLLKaHead;
        while (temp2 != nullptr)
        {
            if (temp1->val != temp2->val)
            {
                return false;
            }
            else
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}