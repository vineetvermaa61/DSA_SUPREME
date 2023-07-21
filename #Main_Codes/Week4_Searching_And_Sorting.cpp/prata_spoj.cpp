#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<int>& cooksRank, int nP, int mid){
    int currP = 0; // initial cooked prata count
    for (int i = 0; i < cooksRank.size(); i++)
    {
        int R = cooksRank[i]; // yahan se ratings update hongi
        int j = 1; // ye 1 2 3 ... multiply karta jayega
        int timeTaken = 0;
        while(true){  // infinite loop
            if(timeTaken + j * R <= mid){
                currP++;
                timeTaken += j*R;
                j++;
            }
            else{
                break;
            }
        }
        if(currP >= nP){
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int>& cooksRank, int nP){
    int start = 0;
    int highestRating = *max_element(cooksRank.begin(), cooksRank.end());
    int end = highestRating * (nP * (nP + 1) / 2);
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if(isPossibleSolution(cooksRank, nP, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        int nP, nC; // nP -> no. of prata  nC -> no. of cook
        cin>>nP>>nC;
        vector<int> cooksRank;
        while(nC--){
            int R; cin>>R; // R -> rating
            cooksRank.push_back(R);
        }
    cout<< minTimeToCompleteOrder(cooksRank,nP)<<endl;
    }

    
    return 0;
}