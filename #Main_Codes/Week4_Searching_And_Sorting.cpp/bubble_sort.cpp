// BUBBLE SORT
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
void bubble_sort(vector<int>& arr){
    int n = arr.size();
    for (int round = 1; round < n; round++)
    {
        bool swapped = false;
        for (int j = 0; j < n-round; j++)
        {
            if (arr[j] > arr[j+1]){
                swapped = true;
                swap(arr[j], arr[j+1]);
            }
            
        }
        if(swapped == false){
            // swap ho chuka hai, no need to check further rounds
            break;
        }
    }
    
}

int main(){
    vector<int> arr{5,4,3,2,1,351,13,88,0};

    cout<<"Before Sorting: ";
    pintArray(arr);

    bubble_sort(arr);

    cout<<endl<<"After Sorting: ";
    pintArray(arr);
    cout<<endl;
    return 0;
}