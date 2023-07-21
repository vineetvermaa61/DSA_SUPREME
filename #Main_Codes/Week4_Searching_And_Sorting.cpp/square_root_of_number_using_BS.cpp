#include<iostream>
#include<vector>
using namespace std;
int findSQRT(int n){
    int s = 0;
    int e = n;
    int target = n;
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s <= e){
        if(mid*mid == target){
            return mid;
        }

        if(mid*mid > target){
            // left search
            e = mid-1;
        }

        if(mid*mid < target){
            // store current answer
            ans = mid;
            // right search
            s = mid+1;
        }
        // MAT BHOOLO MUJHE
        mid = s + (e - s)/2;
    }
    return ans; 
}
int main(){
    vector<int> arr;
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int ans = findSQRT(n);
    cout<<"First answer: "<<ans<<endl;

    int precision;
    cout<<"Enter precision: ";
    cin>>precision;
    double finalAns = ans;
    double step = 0.1;
    // outer is for no. of precision
    for (int i = 0; i < precision; i++)
    {
        // inner loop is making sqrt till required precision
        for (double j = 0; j*j <= n; j = j + step)
        {   
            finalAns = j; // storing answer
            // cout<<finalAns<<" ";
        }
        step = step/10;  // reducing number by decimal to add (point)
    }
    cout<<"Final answer: "<<finalAns<<endl;
    return 0;
}