#include<iostream>
using namespace std;
  class Node{
  public:
  int data;
  Node* next;
  Node(){
    this->data = 0;
    this->next = NULL;  
  }
  Node(int data){
    this->data = data;
    this->next = NULL;
  }

};

void print(Node* &head){
  Node* temp = head;
  while(temp != NULL){
  cout<< temp -> data << " ";
  temp = temp->next;
  }
}

Node* reverseLL(Node* &head){
  Node* prev = NULL;
  Node* curr = head;
  if(head == NULL){
    return head;
  }
  while(curr != NULL){
    Node* forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
  }
  return prev;
}
int main(){



  Node* first = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);

  first->next = second;
  second->next= third;
  third->next = fourth;
  // fourth->next = NULL;

  Node* head = first;

  print(head);
  reverseLL(head);
  cout<<endl;
  print(head);

  return 0;
}



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
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;

//         while(curr != NULL){
//             ListNode* forward = curr->next; 
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         return prev;
//     }
// };