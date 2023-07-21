// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node* next;

//         Node(){
//             this->data = 0;
//             this->next = NULL;
//         }

//         Node(int data){
//             this->data = data;
//             this->next = NULL;
//         }
//     };

//     void print(Node* &head){ 
//         Node* temp = head;
//         while(temp != NULL){
//         cout<< temp->data << " " ;
//         temp = temp -> next;
//         }
//     } 
//     // ~Node(){
//     //     cout<< "Node with value: "<<this->data <<" deleted"<<endl;
//     // }
//     void insertAtHead(Node* &head, Node* &tail, int data){
//         if(head == NULL){
//                 Node* newNode = new Node(data);
//                 head = newNode;
//                 tail = newNode;
//         }
//         else{
//         Node* newNode = new Node(data);
//         newNode->next = head;
//         head = newNode;
//         }
//     } 

//     void insertAtTail(Node* &head, Node* &tail, int data ){
//         if(head == NULL){
//                 Node* newNode = new Node(data);
//                 head = newNode;
//                 tail = newNode;
//         }else{
//         Node* newNode = new Node(data);
//         tail->next = newNode;
//         tail = newNode;
//         }
//     }
     
//     int findLength(Node* &head){
//         int len = 0;
//         Node* temp = head;
//         while(temp != NULL){
//             temp = temp->next;
//             len++;
//         }
//         return len;
//     }

//     void insertAtPosition(int data, int position, Node* &head, Node* &tail){
//         if(head == NULL){
//             Node* newNode =  new Node(data);
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         if(position == 0){
//             insertAtHead(head, tail, data);
//             return;
//         }

//         int len = findLength(head);
//         if(position >= len){
//             insertAtTail(head, tail, data);
//             return;
//         }
        
//         int i=1;
//         Node* prev = head;
//         while(i < position){
//             prev = prev -> next;
//             i++;
//         }
//         Node* curr = prev -> next;
//         Node* newNode = new Node(data);
//         newNode -> next = curr;
//         prev -> next = newNode;

//     }

//     // ************ REVERSE A LINKED LIST *************

//     // Node* reversed ll ka head dega , (print karne ke liye)
//     Node* reverseLinkedList(Node* &prev, Node* &curr){
//         // base case
//         if(curr == NULL){
//             // LL reverse ho chuki hai
//             return prev;
//         }

//         // 1 case solve kardo baki recursion sambhal lega
//         Node* forward = curr -> next;
//         curr -> next = prev;

//         reverseLinkedList(curr, forward);
//     }

// int main(){
//     Node* head = NULL;
//     Node* tail = NULL;
//     insertAtHead(head,tail, 10);
//     insertAtHead(head,tail, 20);
//     insertAtHead(head,tail, 50);
//     insertAtHead(head,tail, 60);
//     insertAtHead(head,tail, 90);
//     insertAtTail(head,tail, 77);

//     print(head);
//     cout<<endl;
//     insertAtPosition(101, 6, head, tail);
//     print(head);
//     cout<<endl;

//     // *************************************
//     Node* prev = NULL;
//     Node* curr = head;
//     head = reverseLinkedList(prev, curr);
//     cout<<endl;
//     print(head);
//     cout<<endl;

//     return 0;
// }


// ***********USING FOR LOOP*********************
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
        cout<< temp->data << " " ;
        temp = temp -> next;
        }
    } 

    // ************ REVERSE A LINKED LIST *************

    Node* reverseLinkedList(Node* &prev, Node* &curr){
        if(curr == NULL){
            return prev;
        }
        Node* forward = curr -> next;
        curr -> next = prev;

        reverseLinkedList(curr, forward);
    }

    // ****METHOD 2 : USING LOOP****
    Node* reverseUsingLoop(Node* &head){
        Node* prev = NULL;
        Node* curr = head;

        while( curr!= NULL){
            Node* temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    // USING LOOP IN RECURSION
    Node* reverseLoopRecursion(Node* &prev, Node* &curr){
        if(curr == NULL){
            return prev;
        }
        Node* temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;

        reverseLinkedList(prev, curr);
    }


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout<<"Printing Linked List: ";
    print(first);
    Node* head = first;

    Node* prev = NULL;
    Node* curr = head;
    // head = reverseLinkedList(prev, curr);
    // cout<<endl;
    // print(head);
    // cout<<endl;

    // head = reverseUsingLoop(head);
    // cout<<endl;
    // print(head);
    // cout<<endl;

    head = reverseLoopRecursion(prev, curr);
    cout<<endl;
    print(head); 
    cout<<endl;

    return 0;
}