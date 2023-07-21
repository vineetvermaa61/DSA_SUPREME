// Sort 01
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{0,1,1,0,1,0,0,1,1,0,1,1,1,1,0,0,1,0,1};
    int start = 0;
    int end = arr.size()-1;
    int i = 0;
    while (start <= end)
    {
        if (arr[i] == 0)
        {
            // keep all 0s left side
            swap(arr[i],arr[start]);
            // start ko age badhao
            start++;
            // i ko age badhao kyonki start par 0 a chuka hai
            i++;
        }
        if (arr[i] == 1)
        {
            // keep all 1s right side
            swap(arr[i],arr[end]);
            // end ko peeche karo
            // i ko aage karne ki jaroorat nahin hai kyonki pointer left side hai end ke paas nahin
            end--;
        }
    }

    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    

    return 0;
}