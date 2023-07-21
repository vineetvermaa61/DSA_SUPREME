// Pair Sum
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,20,40,60,70};
    int sum = 80;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = i+1; j < arr.size(); j++)
        {
            if((element + arr[j]) == sum){
                cout<<"Pair for sum "<<sum<<" is: " <<element<<", "<<arr[j]<<" "<<endl;
            }
        }
        
    }
    
    return 0;
}

// // Printing all pairs
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr{10,20,40,60,70};
//     int sum = 80;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int element = arr[i];
//         for (int j = i+1; j < arr.size(); j++)
//         {
//                 cout<<"Pair is: ("<<element<<", "<<arr[j]<<") "<<endl;
            
//         }
        
//     }
    
//     return 0;
// }


// // Printing flow
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr{10,20,40,60,70};
//     int sum = 80;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<"We are at element "<<arr[i]<<endl;
//         int element = arr[i];
//         for (int j = i+1; j < arr.size(); j++)
//         {
//                 cout<<"Pairing "<<element<<" with "<<arr[j]<<" "<<endl;
            
//         }
        
//     }
    
//     return 0;
// }