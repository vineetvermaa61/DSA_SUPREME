// #include<iostream>
// #include<vector>
// using namespace std;
//     class Solution {
// public:
// vector<long> spiralPathMatrix(vector<long> matrix,long n,long m)
// {
//     // Write your code here
//     vector<long> ans;
//         long total_element = m*n;

//         long startingRow = 0;
//         long endingCol = m-1;
//         long endingRow = n-1;
//         long startingCol = 0;

//         long count = 0;
//         while(count < total_element){

// // 1 2 3 4  5 6 7 8  9 10 11 12  13 14 15 16
// // 0 1 2 3  4 5 6 7  8  9 10 11  12 13 14 15
// // 

//             // prlong startingRow
//             for (long i = startingCol; i <= endingCol && count < total_element; i++)
//             {
//                 ans.push_back(matrix[i]);
//                 count++;
//             }
//             startingRow++;

//             // prlong endingCol
//             for (long i = startingRow; i <= endingRow && count < total_element; i++)
//             {
//                 ans.push_back(matrix[i]);
//                 count++;
//             }
//             endingCol--;

//             // prlong endingRow
//             for (long i = endingCol; i >= startingCol && count < total_element; i--)
//             {
//                 ans.push_back(matrix[i]);
//                 count++;
//             }
//             endingRow--;

//             // prlong startingCol
//             for (long i = endingRow; i >= startingRow && count < total_element; i--)
//             {
//                 ans.push_back(matrix[i]);
//                 count++;
//             }
//             startingCol++;
//         }
//         return ans;
// }
// };
// int main(){
//     Solution sol;
//     // vector<vector<long> > matrix{{1,2},{3,4}};
//     // vector<vector<long> > matrix{{2,3}};
//     // vector<vector<long> > matrix{{1,2,3},{4,5,6},{7,8,9}};
//     // vector<vector<long> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     vector<long> matrix{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

//     // for (long i = 0; i < matrix.size(); i++)
//     // {
//     //     for (long j = 0; j < matrix[0].size(); j++)
//     //     {
//     //         cout<<matrix[i][j]<<" ";
//     //     }
//     //     cout<<endl;
    
//     // }
//         // cout<<endl;

//     vector<long> ans;
//     long n = 4;
//     long m = 4;
//     ans = sol.spiralPathMatrix(matrix,n,m);
//     for (long i = 0; i < ans.size(); i++)
//     {
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }

