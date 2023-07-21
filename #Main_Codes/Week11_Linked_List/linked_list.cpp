#include<iostream>
using namespace std;
class Node{
    public:
        // node ka data
        int data;
        // jaise pointer to int int* waise hi pointer to node node* // current node ke next ka pointer kahan point karega
        Node* next;

        Node(){
            // initially koi data nahin pada hoga unit node par
            this->data = 0;
            // Initially unit node NULL par point karegi
            this->next = NULL;
        }

        Node(int data){
            // data milne par current oject se mila data daal do
            this->data = data;
            // node ka next current object se mile data ke liye by default NULL ko point karega
            this->next = NULL;
        }
    };

    void print(Node* &head){ // head OR we can say first OR current data

        // temp naam ka ek pointer banaya jise current head/node par point karaya
        Node* temp = head;

        // agar temp NULL ho jaye to ruk jao kyonki temp par na to koi data hai na hi next ponter
        while(temp != NULL){
        cout<< temp->data << " " ;

        // pointer ko aage badha do
        temp = temp -> next;
        }


    } 
int main(){
    
    // node creation:
    // nayi node create karo, Node ke first mein 10 daal do
    // ya first naam ki ek nayi node create kar do aur usmein data 10 daal do
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // first ke next ko second se point kara do, second ka next by default NULL rahega
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout<<"Printing Linked List: ";
    print(first);

    return 0;
}