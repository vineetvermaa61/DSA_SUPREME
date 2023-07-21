// SELECTION SORT
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
void selection_sort(vector<int>& arr){
    for (int i = 0; i < arr.size()-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    // pintArray(arr);
}

int main(){
    vector<int> arr{5,4,3,2,1,351,13,88,0};

    cout<<"Before Sorting: ";
    pintArray(arr);

    selection_sort(arr);

    cout<<endl<<"After Sorting: ";
    pintArray(arr);
    cout<<endl;
    return 0;
}