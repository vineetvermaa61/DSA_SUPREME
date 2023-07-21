#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<long long int>& trees,long long int m,long long int mid){
    long long int woodCollected = 0;
    for (long long i = 0; i < trees.size(); i++)
    {
        if(trees[i]>mid){
            woodCollected += trees[i] - mid;
        }
    }
    return woodCollected >= m;
}

long long int maxSawBladeHeight(vector<long long int>& trees, int m){
    long long int start = 0;
    long long int end = *max_element(trees.begin(),trees.end());
    long long int ans = -1;
    while(start <= end){
        long long int mid = start + (end - start)/2;
        if (isPossibleSolution(trees,m,mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
int main(){
    vector<long long int> trees;
    long long int n;
    // cout<<"n: ";
    cin>>n;
    long long int m;
    // cout<<"m: ";
    cin>>m;
    while (n--)
    {
            long long int height;
            // cout<<"height"<<n+1<<": ";
            cin>>height;
            trees.push_back(height);
    }

    long long int ans = maxSawBladeHeight(trees,m);
    cout<<ans<<endl;
    
    
    return 0;
}