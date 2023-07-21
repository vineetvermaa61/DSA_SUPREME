#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    
    cout<< sizeof(arr)/sizeof(int) <<endl;  // compiler dependent

    cout<<arr.size()<<endl;  // size of vector / no. of elements
    cout<<arr.capacity()<<endl; // no. of / how many elements it can store

    // insert
    arr.push_back(6); 
    arr.push_back(8); 

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // remove / delete
    arr.pop_back(); 

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // OTHER METHOD TO CREATE VECTOR
    // vector<int> brr(10); // size=10, by default sare element 0 honge

    // ab 10 elemnt -6 ho jayenge
    // vector<int> brr(10 , -6);

    int n; cout<<"Enter the value of n: "; cin>>n;
    vector<int> brr(n , -6);

    // print
    for (int i = 0; i < brr.size(); i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    // 3RD METHOD TO CREATE VECTOR 
    vector<int> crr{10,23,5,7,56};
    cout<<"crr[3] jo ki 7 hai: "<<crr[3]<<endl;

    // print
    for (int i = 0; i < crr.size(); i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    // empty() function
    cout<<"Vector crr is empty or not(false): "<<crr.empty()<<endl;

    vector<int> drr;
    cout<<"Vector crr is empty or not(true): "<<drr.empty()<<endl;


    return 0;
}