// 54. Spiral Matrix
// *****************************************IMPORTANT**********************************************
#include<iostream>
#include<vector>
#include <algorithm> // for using sort
using namespace std;
    class Solution {
public:
    int findMedian(vector<vector<int> > &arr, int n, int m){
	
	vector<int> ans;
	int total_element = m*n;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			ans.push_back(arr[i][j]);
		}
	}

	sort(ans.begin(), ans.end());
	int start = 0;
	int end = ans.size()-1;
	int mid = start+(end-start)/2;

	int median = ans[mid];
	return median;
}
};
int main(){
    Solution sol;
    // vector<vector<int> > matrix{{1,2},{3,4}};
    // vector<vector<int> > matrix{{2,3}};
    // vector<vector<int> > matrix{{1,2,3},{4,5,6},{7,8,9}};
    // vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int x = sol.findMedian(matrix, 4 , 4);
    cout<<"Median: "<<x<<endl;

    return 0;
}