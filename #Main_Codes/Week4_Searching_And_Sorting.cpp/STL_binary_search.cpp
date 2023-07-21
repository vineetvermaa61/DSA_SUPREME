#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
     vector<int> v{1,2,3,4,5,6};
     vector<int> vec{1,4,4,4,4,4,4,4,6};
     int arr[] = {1,2,3,4,5,6};
     int size = 7;

    // Using vector
    // 3 is key to be found, function returns target value index 
     if(binary_search(v.begin(), v.end(), 3)){
        cout<<"Found"<<endl;
     }
     else{
        cout<<"NOT Found"<<endl;
     }

    // Using array
     if(binary_search(arr, arr + size, 3)){
        cout<<"(ARRAY) Found"<<endl;
     }
     else{
        cout<<"(ARRAY) NOT Found"<<endl;
     }


// STL for finding first occurence of an element
      int target = 4;
     auto ans2 = lower_bound(vec.begin(), vec.end(), target);
                        // ek address ko doosre address se minus karke nikala hai index (minus kiya to un dono address ke beech mein kitne integers a rahe hain ye pata chal jayega)   
     cout<<"First occur: "<<ans2 - vec.begin() <<endl;

// STL for finding last occurence of an element (explore yourself)
     auto ans3 = upper_bound(vec.begin(), vec.end(), target);
     cout<<"First occur: "<<ans3 - vec.begin() -1 <<endl;
    return 0;
}