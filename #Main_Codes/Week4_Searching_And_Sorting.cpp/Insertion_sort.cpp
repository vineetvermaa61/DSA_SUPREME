// INSERTION SORT
#include<iostream>
#include<vector>
using namespace std;

void pintArray(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// to work on original vector pass it by reference
void insertion_sort(vector<int>& arr){
    int n = arr.size();
    for (int  round = 1; round < n; round++)
    {
        // step A - fetch
        int value = arr[round];

        int j = round-1;
        // step B - compare
        for ( ; j >=0; j--)
        {
            if(arr[j] > value){
                // step C - shift
                arr[j+1] = arr[j];
            }
            else{
                // rukna hai
                break;
            }
        }
        // step D - copy
        arr[j+1] = value;
    }
}

int main(){
    vector<int> arr{5,4,3,2,1,351,13,88,0};

    cout<<"Before Sorting: ";
    pintArray(arr);

    insertion_sort(arr);

    cout<<endl<<"After Sorting: ";
    pintArray(arr);
    cout<<endl;
    return 0;
}