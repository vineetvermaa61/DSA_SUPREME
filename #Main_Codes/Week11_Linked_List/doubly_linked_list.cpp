#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this -> data = 0;
        this -> prev = NULL;
        this -> next = NULL;
    }

    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    int i = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        temp = temp -> next;
        i++;
    }
    return i;
}
 
void insertAtHead(Node* &head,Node* &tail, int data){

// ******EDGE CASE********
    if(head == NULL){
        // LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // LL is not empty
    // step1: create a node
    Node* newNode = new Node(data);
    // step2:
    newNode -> next = head;
    // step3:
    head -> prev = newNode;
    // step4:
    head = newNode;
    return;
}

void insertAtTail(Node* &head,Node* &tail, int data){

// ******EDGE CASE********
    if(tail == NULL){
        // LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // LL is not empty
    // step1: create a node
    Node* newNode = new Node(data);
    // step2:
    tail -> next = newNode;
    // step3:
    newNode -> prev = tail;
    // step4:
    tail = newNode;
    // newNode = tail;
    return;
}

void insertAtPosition(Node* &head,Node* &tail, int data, int position){
    if(head == NULL){
        // LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(position == 1){
        insertAtHead(head,tail,data);
        return;
    }

    int len = getLength(head);

// ******* (position > len) *******
    if(position > len){
        insertAtTail(head, tail, data);
        return;
    }

// ****FINDING RIGHT, LEFT NODES****
    Node* newNode = new Node(data);
    int i = 1;
    Node* left = head;
    while(i < position - 1){
        left = left -> next;
        i++;
    }
    Node* right = left -> next;

// **********************************

    newNode -> next = right;
    right -> prev = newNode;

    newNode -> prev = left;
    left -> next = newNode;
    
}

// ~Node(){
    // cout << "Node with value: "<< this->data << " deleted"<<endl;
// }

void deleteFromPosition(Node* &head,Node* &tail,int position){
    if(head == NULL){
        cout<< "Linked List is empty!!"<<endl;
        return;
    }

    if(head -> next == NULL){
        // single node
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    int len = getLength(head);
    if( position > len ){
        cout<< "Please enter a valid position"<<endl;
        return;
    }

    if(position == 1){
        // want to delete the first node
        Node* temp = head;
        head = head -> next;
        head -> prev = NULL;
        temp ->next = NULL;
        delete temp;
        return;
    }

    if(position == len){
        // delete last node
        Node* temp = tail;
        tail = tail -> prev;
        temp -> prev = NULL;
        tail -> next = NULL;
        delete temp;
        return;
    }

    // delete from middle of liked list

    // step1: find left, curr, right
    int i = 1;
    Node* left = head;
    while (i < position -1)
    {
        left = left -> next;
        i++;
    }
    Node* curr = left -> next;
    Node* right = curr -> next;

    // step2:
    left -> next = right;
    // step3:
    right -> prev = left;
    // step4:
    curr -> next = NULL;
    curr -> prev = NULL;
    delete curr;
}

int main(){
    
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first -> next = second;
    second -> prev = first;

    second -> next = third;
    third -> prev = second;

    // *****PRINTING DOUBLY LINKED LIST******
    print(first);

    // ******INSERTING AT HEAD********
    Node* head = first;
    Node* tail = third;
    insertAtHead(head,tail, 5);
    print(head);

    // ******INSERTING AT TAIL********
    insertAtTail(head,tail, 50);
    print(head);

    // ******INSERTING AT POSITION********
    insertAtPosition(head,tail, 33,2);
    print(head);

    // ******DELETING AT POSITION********
    int pos = 4;
    cout<<"Deleting from position "<<pos<<endl;
    deleteFromPosition(head,tail,pos);
    print(head);

    return 0;
}