#include<iostream>
#include<vector>
using namespace std;
    class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        // int total_element = m*n;

        // int startingRow = 0;
        // int endingRow = m-1;
        
        // int count = 0;
        
            int col = 0;
            int row = 0;
            while (col < n)
            {
                int r = row;
                int c = col;
                while (r<n && c>= 0)
                {
                    ans.push_back(matrix[r][c]);
                    r++;
                    c--;
                }
                col++;
            }
            col = n-1;
            row = 1;
            while (row<n)
            {
                int r = row;
                int c = col;
                while(r<n && c>=0){
                    ans.push_back(matrix[r][c]);
                    r++;
                    c--;
                }
                row++;
            }
            
            
           
        return ans;}
};

int main(){
    Solution sol;
    // vector<vector<int> > matrix{{1,2},{3,4}};
    // vector<vector<int> > matrix{{2,3}};
    // vector<vector<int> > matrix{{1,2,3},{4,5,6},{7,8,9}};
    // vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // cout<<"1"<<endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    
    }
        cout<<endl;
    // cout<<"2"<<endl;

    vector<int> ans;
    ans = sol.spiralOrder(matrix);
    // cout<<"3"<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}