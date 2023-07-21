// Input :  1 2 2 1 3 4 4 6 9 6 9
// Output : 3
#include<iostream>
#include<vector>
using namespace std;
int uniqueElement(vector<int> arr){
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
    ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int n; cout<<"Enter the size of array: "; cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    int element = uniqueElement(arr);
    cout<<"Unique element is: "<<element<<endl;
    
    return 0;
}