#include<iostream>
#include<string.h>
using namespace std;

int main(){

    // CHARATOR STORE KAR SAKTE HAIN INT ARRAY MEIN
    int arr[] = {1,2,'a',3,4};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // INPUT - METHOD 1
    char name[100];
    cout<<"Enter name: "; 
    cin>>name;
    cout<<"Your name: "<<name<<endl;

    char ch[100];
    // INPUT - METHOD 2
    ch[0] = 'a';
    ch[1] = 'b';
    cout<<"Enter charactor: ";
    // INPUT - METHOD 3
    cin>>ch[2];
    cout<<ch[0]<<ch[1]<<ch[2]<<endl;
 
    // NULL CHARACTOR HAI YA NAHIN?
    char naam[100];
    // char naam[6];  //..
    cout<<"Enter Vineet ";
    cin>>naam; // input => "Vineet";
    cout<<endl<<name;
    for (int i = 0; i < 7; i++)
    {
        cout<<"Index "<<i<<" Value is "<< naam[i]<<endl;
    }
    cout<<endl;
    // NULL CHARACTOR VALUE
    int value = (int)naam[6]; // ..
    // int value = (int)naam[7];
    cout<<"Value of null charactor "<< value <<endl;

    // SPACES/TABS/\n WALI PROBLEMS
    // char space[100];
    // cout<<"Spaces ke sath print ";
    // cin>>space;
    // cout<<"Spaces wala output "<<space;


    // SOLUTION OF ABOVE PROBLEM  
    char problem [100];
    // cin>>brr;

    // FOLLOWED BY #include<string.h>
    // by using getline function 
    // SYNTAX 1
    // getline(cin,brr);

    // SYNTAX 2
    // input lo brr ka, max input size 99
    cout<<"Probelm solved enter: ";
    cin.getline( problem,50);
    cout<<"Solution "<<problem<<endl;

    // solution
    char name2 [30];
    cout << "please enter your full name : ";
    cin.getline( name2,29);
    cout << "hello " << name2 << endl;

    // NO SOLUTION USING FOR LOOP - KYONKI END NAHIN PATA HAI
//     cout<<"using for loop "<<endl;
//     char array[100];
//     for (int i = 0; i < 100; i++)
//     {
//         cin>>array[i];
//         if(array[i] == '/0'){
//             break;
//         }
//     }
//     for (int i = 0; i < 100; i++)
//     {
//         cout<<array[i];
//     }
    

    return 0;
}