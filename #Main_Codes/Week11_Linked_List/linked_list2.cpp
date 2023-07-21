// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         // node ka data
//         int data;
//         // jaise pointer to int int* waise hi pointer to node node* // current node ke next ka pointer kahan point karega
//         Node* next;

//         Node(){
//             // initially koi data nahin pada hoga unit node par
//             this->data = 0;
//             // Initially unit node NULL par point karegi
//             this->next = NULL;
//         }

//         Node(int data){
//             // data milne par current oject se mila data daal do
//             this->data = data;
//             // node ka next current object se mile data ke liye by default NULL ko point karega
//             this->next = NULL;
//         }
//     };

//     void print(Node* &head){ // head OR we can say first OR current data

//         // temp naam ka ek pointer banaya jise current head/node par point karaya
//         Node* temp = head;

//         // agar temp NULL ho jaye to ruk jao kyonki temp par na to koi data hai na hi next ponter
//         while(temp != NULL){
//         cout<< temp->data << " " ;

//         // pointer ko aage badha do
//         temp = temp -> next;
//         }
//     } 

//     // I want to insert a node right at the head of linked list
//     void insertAtHead(Node* &head, int data){ // & taki original node par work ho
// // **********************VISUALISE WITH DIAGRAM*************************
//         // step1: ek nayi node create kar do jisme 'data' data pada hai
//         Node* newNode = new Node(data);

//         // step2: bani hui node ke next ko head par point kara do jo pehle NULL ko point kar raha hoga
//         newNode->next = head;

//         // step3: head hamesha starting of linked list ko darshata hai to head ko newNode ke head par laga do
//         head = newNode;

//     } 
// int main(){
    
//     // single node create kar diya jiska next null ko point kar raha hai aur jisme data 10 hai
//     // Node* head = new Node(10);
//     // ho sakta hai head mein hamesha ek node na ho, head to NULL bhi ho sakta hai
//     Node* head = NULL;
//     insertAtHead(head, 10);
//     insertAtHead(head, 20);
//     insertAtHead(head, 50);
//     insertAtHead(head, 60);
//     insertAtHead(head, 90);
//     print(head);

//     return 0;
// }



// // **************** INSERT AT TAIL + HEAD *****************
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         // node ka data
//         int data;
//         // jaise pointer to int int* waise hi pointer to node node* // current node ke next ka pointer kahan point karega
//         Node* next;

//         Node(){
//             // initially koi data nahin pada hoga unit node par
//             this->data = 0;
//             // Initially unit node NULL par point karegi
//             this->next = NULL;
//         }

//         Node(int data){
//             // data milne par current oject se mila data daal do
//             this->data = data;
//             // node ka next current object se mile data ke liye by default NULL ko point karega
//             this->next = NULL;
//         }
//     };

//     void print(Node* &head){ // head OR we can say first OR current data

//         // temp naam ka ek pointer banaya jise current head/node par point karaya
//         Node* temp = head;

//         // agar temp NULL ho jaye to ruk jao kyonki temp par na to koi data hai na hi next ponter
//         while(temp != NULL){
//         cout<< temp->data << " " ;

//         // pointer ko aage badha do
//         temp = temp -> next;
//         }
//     } 

//     // I want to insert a node right at the head of linked list
//     void insertAtHead(Node* &head, Node* &tail, int data){ // & taki original node par work ho
// // **********************VISUALISE WITH DIAGRAM*************************

        
//         // step1: ek nayi node create kar do jisme 'data' data pada hai
//         Node* newNode = new Node(data);

//         // step2: bani hui node ke next ko head par point kara do jo pehle NULL ko point kar raha hoga
//         newNode->next = head;

//         // first node
//         if(head == NULL){
    //  // LL-> empty list, first node ab add hogi
//             tail = newNode;
//         }

//         // step3: head hamesha starting of linked list ko darshata hai to head ko newNode ke head par laga do
//         head = newNode;
//     } 

//     void insertAtTail(Node* &head, Node* &tail, int data ){
//         // step1: create a node
//         Node* newNode = new Node(data);
//         // step2: connect with tail node

//         // first node ab add hone wali hai

//         if(tail == NULL){
//              tail = newNode;
//              head = newNode;
//         }else{
//    // liked list non-empty
//         tail->next = newNode;
//         }
//         // step3: update tail

//         tail = newNode;
//     }
// int main(){
    
//     // single node create kar diya jiska next null ko point kar raha hai aur jisme data 10 hai
//     // Node* head = new Node(10);
//     // ho sakta hai head mein hamesha ek node na ho, head to NULL bhi ho sakta hai
//     Node* head = NULL;
//     Node* tail = NULL;
//     // insertAtHead(head,tail, 10);
//     // insertAtHead(head,tail, 20);
//     // insertAtHead(head,tail, 50);
//     // insertAtHead(head,tail, 60);
//     // insertAtHead(head,tail, 90);
//     insertAtTail(head,tail, 77);
//     print(head);

//     return 0;
// }


// // **************** INSERT AT TAIL + HEAD *****************
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         // node ka data
//         int data;
//         // jaise pointer to int int* waise hi pointer to node node* // current node ke next ka pointer kahan point karega
//         Node* next;

//         Node(){
//             // initially koi data nahin pada hoga unit node par
//             this->data = 0;
//             // Initially unit node NULL par point karegi
//             this->next = NULL;
//         }

//         Node(int data){
//             // data milne par current oject se mila data daal do
//             this->data = data;
//             // node ka next current object se mile data ke liye by default NULL ko point karega
//             this->next = NULL;
//         }
//     };

//     void print(Node* &head){ // head OR we can say first OR current data

//         // temp naam ka ek pointer banaya jise current head/node par point karaya
//         Node* temp = head;

//         // agar temp NULL ho jaye to ruk jao kyonki temp par na to koi data hai na hi next ponter
//         while(temp != NULL){
//         cout<< temp->data << " " ;

//         // pointer ko aage badha do
//         temp = temp -> next;
//         }
//     } 

//     // I want to insert a node right at the head of linked list
//     void insertAtHead(Node* &head, Node* &tail, int data){ // & taki original node par work ho
// // **********************VISUALISE WITH DIAGRAM*************************

//         // check for empty LL - nayi node banao, isi node ko head maan lo,aur isi node ko tail maan lo aur return kar jao
//         if(head == NULL){
//                 Node* newNode = new Node(data);
//                 head = newNode;
//                 tail = newNode;
//                 return;
//         }
//         // step1: ek nayi node create kar do jisme 'data' data pada hai
//         Node* newNode = new Node(data);

//         // step2: bani hui node ke next ko head par point kara do jo pehle NULL ko point kar raha hoga
//         newNode->next = head;

//         // step3: head hamesha starting of linked list ko darshata hai to head ko newNode ke head par laga do
//         head = newNode;
//     } 

//     void insertAtTail(Node* &head, Node* &tail, int data ){

//         // check for empty LL - nayi node banao, isi node ko head maan lo,aur isi node ko tail maan lo aur return kar jao
//         if(head == NULL){
//                 Node* newNode = new Node(data);
//                 head = newNode;
//                 tail = newNode;
//                 // ek node create karne aaye ho to create karo aur return kar jao
//                 return;
//         }

//         // step1: create a node
//         Node* newNode = new Node(data);

//         // step2: connect with tail node
//         tail->next = newNode;

//         // step3: update tail
//         tail = newNode;
//     }
// int main(){
    
//     // single node create kar diya jiska next null ko point kar raha hai aur jisme data 10 hai
//     // Node* head = new Node(10);
//     // ho sakta hai head mein hamesha ek node na ho, head to NULL bhi ho sakta hai
//     Node* head = NULL;
//     Node* tail = NULL;
//     // insertAtHead(head,tail, 10);
//     // insertAtHead(head,tail, 20);
//     // insertAtHead(head,tail, 50);
//     // insertAtHead(head,tail, 60);
//     // insertAtHead(head,tail, 90);
//     insertAtTail(head,tail, 77);
//     print(head);

//     return 0;
// }

// // **************** INSERT AT TAIL + HEAD *****************
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         // node ka data
//         int data;
//         // jaise pointer to int int* waise hi pointer to node node* // current node ke next ka pointer kahan point karega
//         Node* next;

//         Node(){
//             // initially koi data nahin pada hoga unit node par
//             this->data = 0;
//             // Initially unit node NULL par point karegi
//             this->next = NULL;
//         }

//         Node(int data){
//             // data milne par current oject se mila data daal do
//             this->data = data;
//             // node ka next current object se mile data ke liye by default NULL ko point karega
//             this->next = NULL;
//         }
//     };

//     void print(Node* &head){ // head OR we can say first OR current data

//         // temp naam ka ek pointer banaya jise current head/node par point karaya
//         Node* temp = head;

//         // agar temp NULL ho jaye to ruk jao kyonki temp par na to koi data hai na hi next ponter
//         while(temp != NULL){
//         cout<< temp->data << " " ;

//         // pointer ko aage badha do
//         temp = temp -> next;
//         }
//     } 

//     // I want to insert a node right at the head of linked list
//     void insertAtHead(Node* &head, Node* &tail, int data){ // & taki original node par work ho
// // **********************VISUALISE WITH DIAGRAM*************************

//         // check for empty LL - nayi node banao, isi node ko head maan lo,aur isi node ko tail maan lo aur return kar jao
//         if(head == NULL){
//                 Node* newNode = new Node(data);
//                 head = newNode;
//                 tail = newNode;
//         }
//         else{

//         // step1: ek nayi node create kar do jisme 'data' data pada hai
//         Node* newNode = new Node(data);

//         // step2: bani hui node ke next ko head par point kara do jo pehle NULL ko point kar raha hoga
//         newNode->next = head;

//         // step3: head hamesha starting of linked list ko darshata hai to head ko newNode ke head par laga do
//         head = newNode;
//         }
//     } 

//     void insertAtTail(Node* &head, Node* &tail, int data ){

//         // check for empty LL - nayi node banao, isi node ko head maan lo,aur isi node ko tail maan lo aur return kar jao
//         if(head == NULL){
//                 Node* newNode = new Node(data);
//                 head = newNode;
//                 tail = newNode;
//                 // ek node create karne aaye ho to create karo aur return kar jao
//         }else{


//         // step1: create a node
//         Node* newNode = new Node(data);

//         // step2: connect with tail node
//         tail->next = newNode;

//         // step3: update tail
//         tail = newNode;
//         }
//     }
// int main(){
    
//     // single node create kar diya jiska next null ko point kar raha hai aur jisme data 10 hai
//     // Node* head = new Node(10);
//     // ho sakta hai head mein hamesha ek node na ho, head to NULL bhi ho sakta hai
//     Node* head = NULL;
//     Node* tail = NULL;
//     // insertAtHead(head,tail, 10);
//     // insertAtHead(head,tail, 20);
//     // insertAtHead(head,tail, 50);
//     // insertAtHead(head,tail, 60);
//     // insertAtHead(head,tail, 90);
//     insertAtTail(head,tail, 77);
//     print(head);

//     return 0;
// }



// **************** INSERT AT POSITION + DELETE NODE *****************
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

    // TODO: Write a destructor to delete a node
    // ~Node(){
    //     cout<< "Node with value: "<<this->data <<" deleted"<<endl;
    // }

    // I want to insert a node right at the head of linked list
    void insertAtHead(Node* &head, Node* &tail, int data){ // & taki original node par work ho
// **********************VISUALISE WITH DIAGRAM*************************

        // check for empty LL - nayi node banao, isi node ko head maan lo,aur isi node ko tail maan lo aur return kar jao
        if(head == NULL){
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else{

        // step1: ek nayi node create kar do jisme 'data' data pada hai
        Node* newNode = new Node(data);

        // step2: bani hui node ke next ko head par point kara do jo pehle NULL ko point kar raha hoga
        newNode->next = head;

        // step3: head hamesha starting of linked list ko darshata hai to head ko newNode ke head par laga do
        head = newNode;
        }
    } 

    void insertAtTail(Node* &head, Node* &tail, int data ){

        // check for empty LL - nayi node banao, isi node ko head maan lo,aur isi node ko tail maan lo aur return kar jao
        if(head == NULL){
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                // ek node create karne aaye ho to create karo aur return kar jao
        }else{


        // step1: create a node
        Node* newNode = new Node(data);

        // step2: connect with tail node
        tail->next = newNode;

        // step3: update tail
        tail = newNode;
        }
    }
     
    int findLength(Node* &head){
        int len = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        return len;
    }

    void insertAtPosition(int data, int position, Node* &head, Node* &tail){
        if(head == NULL){
            Node* newNode =  new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }
        // step1: find the position: prev & curr

        if(position == 0){
            insertAtHead(head, tail, data);
            return;
        }

        int len = findLength(head);
        if(position >= len){
            insertAtTail(head, tail, data);
            return;
        }
        
        int i=1;
        Node* prev = head;
        while(i < position){
            prev = prev -> next;
            i++;
        }
        Node* curr = prev -> next;

        // step2
        Node* newNode = new Node(data);

        // step3
        newNode -> next = curr;

        // step4
        prev -> next = newNode;

    }

    void deleteNode(int position, Node* &head, Node* &tail){
         if(head == NULL){
            cout<< "Cannot delete , LL is empty ";
            return;
         }

        // delete first node
         if(position == 1){
            Node* temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp; // destructur to delete called
            return;
         }

         int len = findLength(head);

        //  deleting last node
         if(position == len){
            // find prev 
            int i = 1;
            Node* prev = head;
            while(i < position - 1){
                prev = prev -> next;
                i++;
            }
                // step2:
                prev -> next = NULL;
                // step3:
                Node* temp = tail;
                // step4:
                tail = prev;
                // step5:
                delete temp;
                return;
            
         }

        //  deleting middle node
        // step: find prev and curr
        int i = 1;
        Node* prev = head;
        while( i< position - 1){
            prev = prev -> next;
            i++;
        }
        Node* curr = prev -> next;
        
        // step2:
        prev->next = curr -> next;

        // step3:
        curr->next = NULL;
        // step4:
        delete curr;

    }


int main(){
    
    // single node create kar diya jiska next null ko point kar raha hai aur jisme data 10 hai
    // Node* head = new Node(10);
    // ho sakta hai head mein hamesha ek node na ho, head to NULL bhi ho sakta hai
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail, 10);
    insertAtHead(head,tail, 20);
    insertAtHead(head,tail, 50);
    insertAtHead(head,tail, 60);
    insertAtHead(head,tail, 90);
    insertAtTail(head,tail, 77);

    print(head);
    cout<<endl;
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    insertAtPosition(101, 6, head, tail);

    print(head);
    cout<<endl;
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    print(head);
    cout<<endl;
    deleteNode(4, head, tail);
    print(head);
    cout<<endl;



    return 0;
}