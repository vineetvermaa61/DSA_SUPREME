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

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while( temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

Node* reverseKNodes(Node* head, int k){
    if(head == NULL){
        cout<< "LL is empty!!" << endl;
        return NULL;
    }

    int length = getLength(head);
    if(k > length){
        cout<< "Enter a valid value of k" << endl;
        return head;
    }

    // it means number of nodes in LL is >= k

    // Step A: reverse first k nodes of LL
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    int count = 0;
    while(count < k){
        forward = curr->next;
        curr->next = prev;
        count++;
        prev = curr;
        curr = forward;
    }

    // Step B: recursive call
    if(forward != NULL){
        // we still have nodes to reverse
        head->next = reverseKNodes(forward,k);
    }
    // Step C: return head of modified LL
    return prev;
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    print(head);
    head = reverseKNodes(head, 2);
    print(head);
    

    return 0;
}