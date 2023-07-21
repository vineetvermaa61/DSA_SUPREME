#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> arr{1,3,3,4,4,6,7};
    vector <int> brr{2,3,4,9};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if(element == brr[j]){
                // mark element
                // brr[j] = -1;
                brr[j] = INT_MIN; // for handling duplicates
                ans.push_back(element);
            }
        }    
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}