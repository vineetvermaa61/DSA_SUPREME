#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,6,9};
    int key = 12;
    bool flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
        }
    }
        if (flag){
            cout<<"Present"<<endl;
        }else{
            cout<<"Absent"<<endl;
        }
    
    return 0;
}