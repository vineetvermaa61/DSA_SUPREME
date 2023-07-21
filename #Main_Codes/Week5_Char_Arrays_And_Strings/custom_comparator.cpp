#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator_custom(char first, char second){
    return first > second;
}
int main(){
    string s = "babbar";

    cout<<"Before: "<<s<<endl;
    // sort(s.begin(), s.end());
    sort(s.begin(), s.end(), comparator_custom);
    cout<<"After: "<<s<<endl;

    return 0;
}