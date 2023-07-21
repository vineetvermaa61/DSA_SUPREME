#include<iostream>
#include<vector>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;
// ********************************************MOST MOST IMPORTANT********************************************
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // STEP1 : Converting time string into minutes integer value 
        vector<int> intMinutes;
        int n = timePoints.size();
        for(int i = 0; i < timePoints.size(); i++){  // array ke sabhi indexes par available strings ko integer mein convert karna hai isliye ye loop use kiya hai
            string current  = timePoints[i]; // ith index par timpoints array mein jo string padi hai wo nikaal li
            // cout<<"current "<<current<<" i-> "<<i<<endl;
            // stoi => converts string to integer
            // finding substring for hour and converting it into integer value
            int hours = stoi(current.substr(0,2));  // 0 index se start karo aur 2 length ki string de do
            // cout<<"hours "<<hours<<" i-> "<<i<<endl;
            // cout<<"i1 "<<i<<endl;
            int minutes = stoi(current.substr(3,2));
            // cout<<"minutes "<<minutes<<" i-> "<<i<<endl;
            // cout<<"i2 "<<i<<endl;
            int totalMinutes = hours*60 + minutes;
            intMinutes.push_back(totalMinutes);
        }
        // STEP2: sort() min to get them in asc. order to find minimum min difference in O(n)
        sort(intMinutes.begin(), intMinutes.end()); 

        // STEP3: Finding min difference and giving minimum diffrence value
        int mini = INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            mini = min(mini, intMinutes[i+1] - intMinutes[i]);
        }
        // *****************************************YAHIN PAR PHASOGE BAR BAR************************************************
        int finalDiff1 = min(mini, (intMinutes[0] + 1440) - intMinutes[intMinutes.size()-1] );
        int finalDiff2 = min(mini, intMinutes[intMinutes.size()-1] - (intMinutes[0]) );

        mini = min(finalDiff1,finalDiff2);

        return mini;
    }
};
int main(){
    // vector<string> v{"23:59","00:00"};
    vector<string> v{"12:10","10:15","13:15","17:20","18:00","19:47","23:59"};
    Solution Sol;
    cout<<Sol.findMinDifference(v)<<endl;
    return 0;
}


// class Solution {
// public:
//     int findMinDifference(vector<string>& timePoints) {
//         // STEP1 : Converting time string into minutes integer value 
//         vector<int> mint;
//         int n = timePoints.size();
//         for(int i = 0; i < n; i++){
//             string current  = timePoints[i];
//             int hours = stoi(current.substr(0,2));
//             int minutes = stoi(current.substr(3,2));
//             int totalMinutes = hours*60 + minutes;
//             mint.push_back(totalMinutes);
//         }
//         // STEP2: sort() min to get them in asc. order to find minimum min difference in O(n)
//         sort(mint.begin(), mint.end()); 

//         // STEP3: Finding min difference and giving minimum diffrence value
//         int mini = INT_MAX;
//         for (int i = 0; i < n-1; i++)
//         {
//             mini = min(mini, mint[i+1] - mint[i]);
//         }
//         // *****************************************YAHIN PAR PHASOGE BAR BAR************************************************
//         int finalDiff1 = min(mini, (mint[0] + 1440) - mint[mint.size()-1] );
//         int finalDiff2 = min(mini, mint[mint.size()-1] - (mint[0]) );

//         mini = min(finalDiff1,finalDiff2);

//         return mini;
//     }
// };

// class Solution {
// public:
//     int findMinDifference(vector<string>& timePoints) {
//         vector<int> intMinutes;
//         int n = timePoints.size();
//         // Step1: time string to integer minutes
//         for(int i = 0; i<n;i++){
//             string currentTimeString = timePoints[i];
//             // finding substring for hour and converting it into integer value
//             int hours = stoi(currentTimeString.substr(0,2));
//             int minutes = stoi(currentTimeString.substr(3,2));
//             int totalMinutes = hours*60+minutes;
//             intMinutes.push_back(totalMinutes);
//         }

//         // Step2: sort
//         sort(intMinutes.begin(),intMinutes.end());

//         // Step3: find minimum differences
//         int mini = INT_MAX;
//         for(int i = 0; i < intMinutes.size()-1 ; i++){
//             mini = min(mini, (intMinutes[i+1] - intMinutes[i]));
//         }

//         // Step4: EDGE CASE : *******************YAHIN PAR PHASOGE BAR BAR***********************
//         int timeDiff1 = min(mini, (intMinutes[intMinutes.size()-1] - intMinutes[0]));
//         int timeDiff2 = min(mini, (intMinutes[0] + 1440) - intMinutes[intMinutes.size()-1]);
//         mini = min(timeDiff1,timeDiff2);
//         return mini;
//     }
// };