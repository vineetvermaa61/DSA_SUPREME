// //  Boyer-Moore Voting Algorithm to find the majority element

// *****************IMPORTANT******************

// // STEP1: Finding candidate for majority element
// // STEP2: Verify majority element
// #include<iostream>
// #include<vector>
// using namespace std;

// // STEP1: Finding candidate for majority element
//     int findCandidate(vector<int> arr){
//         int majority_index = 0; 
//         int count = 1; 
//                 cout<<"Initially: Majority Index: "<<majority_index<<" Majority element: "<<arr[majority_index]<<endl;
//         for (int i = 1; i < arr.size(); i++)
//         {
//                 // cout<<"ME: "<<majority_index<<" i:"<<i<<endl;
//             if(arr[majority_index] == arr[i]){
//                 count++;
//                 // cout<<"ME: "<<majority_index<<" i:"<<i<<endl;
//             }
//             else{
//                 count--;
//             }
            
//             if (count == 0)
//             {
//                 majority_index = i;
//                 // cout<<"ME: "<<majority_index<<" i:"<<i<<endl;
//                 count = 1;
//             }
//                 cout<<"Majority Index: "<<majority_index<<" Majority element: "<<arr[majority_index]<<" i:"<<i<<endl;
//         }
//         return arr[majority_index];
//     }

//     bool isMajority(vector<int> arr, int cand){
//         int count = 0;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             if(arr[i] == cand){
//                 count++;
//             }
//         }
//         cout<<"counting: "<<count<<endl;
//             if(count > arr.size()/2){
//                 return 1;
//             }
//             else{
//                 return 0;
//             }
        
//     }

//     void printMajority(vector<int> arr){
//         // find the candidate for majority
//         int candidate = findCandidate(arr);
//         if (isMajority(arr, candidate))
//         {
//             cout<<" "<< candidate << " ";
//         }
//         else{
//             cout<<"No Majority element"<<endl;
//         }
        
//     }

// int main(){
//     vector<int> arr{1,3,3,1,2};

//     printMajority(arr);

//     return 0;
// }

// PRACTICE:
#include<iostream>
using namespace std;

// majority element find out kar rahe hain
    int majorityElement(int *arr, int size){
        // pehle element ko majority element maan liya
        int majorityIndex = 0;
        // kyonki pehle element ki count to 1 hi hogi
        int count = 1;
        for (int i = 1; i < size; i++)
        {
            // agar majority index next index ke barabar hai to count badhao
            if(arr[majorityIndex] == arr[i]){
                count++;
            }
            else{
                count--;
            }

// agar count 0 ho raha hai, to current element ko majority mankar uski counting as usual 1 kar do
            if(count == 0){
                majorityIndex = i;
                count = 1;
            }
        }
        return arr[majorityIndex];
    }

    void printMajority(int *arr, int size){
        int count = 0;
        int major = majorityElement(arr, size);
        // majority element ki frequency nikaal rahe
        for (int i = 0; i < size; i++)
        {
            if(major == arr[i]){
                count++;
            }
        }
        
        // agar majority element ki frequency size/2 se jyada hai tabhi majority element bol sakte hain
            if(count > size/2){
                cout<<"Majority elemnt is: "<<major<<endl;
            }
            else{
                cout<<"No Mjority element"<<endl;
            }
    }
int main(){
    // int arr[] = {2,3,4,3,3};
    int arr[] = {1,3,3,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<"size: "<<size<<endl;
    printMajority(arr,size);
    return 0;
}