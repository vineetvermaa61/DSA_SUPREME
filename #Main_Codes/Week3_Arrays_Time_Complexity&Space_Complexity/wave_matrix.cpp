// 54. WAVE Matrix
// *****************************************IMPORTANT**********************************************
// #include<iostream>
// #include<vector>
// using namespace std;
//     class Solution {
// public:
// // COLUMN-WISE WAVE
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int m = matrix.size();
//         int n = matrix[0].size();
//         int total_element = m*n;

// //      0 1  2  3
// //
// //  0   1 2  3  4
// //  1   5 6  7  8
// //  2   9 10 11 12
// //  3   13 14 15 16
//         int startingRow = 0;
//         int endingRow = m-1;
//         int SR = startingRow;
//         int count = 0;
//         while(count < total_element){

//             // print startingRow
//             for (int i = startingRow; i <= endingRow && count < total_element; i++)
//             {
//                 ans.push_back(matrix[i][SR]);
//                 count++;
//             }
//             SR++;

//             // print endingCol
//             for (int i = endingRow; i >= startingRow && count < total_element; i--)
//             {
//                 ans.push_back(matrix[i][SR]);
//                 count++;
//             }
//             SR++;
        
//     }
//         return ans;}
// };
// int main(){
//     Solution sol;
//     // vector<vector<int> > matrix{{1,2},{3,4}};
//     // vector<vector<int> > matrix{{2,3}};
//     // vector<vector<int> > matrix{{1,2,3},{4,5,6},{7,8,9}};
//     // vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < matrix[0].size(); j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
    
//     }
//         cout<<endl;

//     vector<int> ans;
//     ans = sol.spiralOrder(matrix);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
//     class Solution {
// public:
// // ROW-WISE WAVE
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int m = matrix.size();
//         int n = matrix[0].size();
//         int total_element = m*n;

// //      0 1  2  3
// //
// //  0   1 2  3  4
// //  1   5 6  7  8
// //  2   9 10 11 12
// //  3   13 14 15 16
//         int startingRow = 0;
//         int endingRow = n-1;
//         int SR = startingRow;
//         int count = 0;
//         while(count < total_element){

//             // print startingRow
//             for (int i = startingRow; i <= endingRow && count < total_element; i++)
//             {
//                 ans.push_back(matrix[SR][i]);
//                 count++;
//             }
//             SR++;

//             // print endingCol
//             for (int i = endingRow; i >= startingRow && count < total_element; i--)
//             {
//                 ans.push_back(matrix[SR][i]);
//                 count++;
//             }
//             SR++;
        
//     }
//         return ans;}
// };
// int main(){
//     Solution sol;
//     // vector<vector<int> > matrix{{1,2},{3,4}};
//     // vector<vector<int> > matrix{{2,3}};
//     // vector<vector<int> > matrix{{1,2,3},{4,5,6},{7,8,9}};
//     vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     // vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < matrix[0].size(); j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
    
//     }
//         cout<<endl;

//     vector<int> ans;
//     ans = sol.spiralOrder(matrix);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }


// Using even/odd column method:

#include<iostream>
#include<vector>
using namespace std;
    class Solution {
public:
// ROW-WISE WAVE
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total_element = m*n;

//      0 1  2  3
//
//  0   1 2  3  4
//  1   5 6  7  8
//  2   9 10 11 12
//  3   13 14 15 16
        int startingRow = 0;
        int endingRow = n-1;
        int SR = startingRow;
        int count = 0;
        // while(count < total_element){

            for (int col = 0; col < n; col++)
            {
                // even col
                if(col%2 == 0){
                    for (int row = 0; row < m; row++)
                    {
                        ans.push_back(matrix[row][col]);
                    }
                    
                }else{
                    // odd col
                    for (int row = m-1; row >= 0; row--)
                    {
                        ans.push_back(matrix[row][col]);
                    }
                }
            }
            
        
    // }
        return ans;}
};
int main(){
    Solution sol;
    // vector<vector<int> > matrix{{1,2},{3,4}};
    // vector<vector<int> > matrix{{2,3}};
    // vector<vector<int> > matrix{{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    
    }
        cout<<endl;

    vector<int> ans;
    ans = sol.spiralOrder(matrix);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}