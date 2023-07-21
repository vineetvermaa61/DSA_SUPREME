// 54. Spiral Matrix
// *****************************************IMPORTANT**********************************************
#include<iostream>
#include<vector>
using namespace std;
    class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total_element = m*n;

        int startingRow = 0;
        int endingCol = n-1;
        int endingRow = m-1;
        int startingCol = 0;

        int count = 0;
        while(count < total_element){

            // print startingRow
            for (int i = startingCol; i <= endingCol && count < total_element; i++)
            {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // print endingCol
            for (int i = startingRow; i <= endingRow && count < total_element; i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // print endingRow
            for (int i = endingCol; i >= startingCol && count < total_element; i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // print startingCol
            for (int i = endingRow; i >= startingRow && count < total_element; i--)
            {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
int main(){
    Solution sol;
    // vector<vector<int> > matrix{{1,2},{3,4}};
    // vector<vector<int> > matrix{{2,3}};
    // vector<vector<int> > matrix{{1,2,3},{4,5,6},{7,8,9}};
    // vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

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


// /*

//     Time Complexity : O(N * M)
//     Space Complexity : O(1)

//     Where N is the number of rows in the matrix,
//           M is the number of columns in the matrix.

// */

// vector<long> spiralPathMatrix(vector<vector<long> > matrix,long m,long n)
// {
//      long i;
//      long k = 0;
//      long l = 0;
 
//     /*  
//         k - starting row index
//         m - ending row index
//         l - starting column index
//         n - ending column index
//         i - iterator
//     */
 
//     // Make vector to store the path
//     vector<long> path;

//     while (k < m && l < n) 
//     {
//         // Push the first row from the remaining rows 
//         for (i = l; i < n; ++i) 
//         {
//             path.push_back(matrix[k][i]);
//         }
//         k= k + 1;
 
//         // Push the last column from the remaining columns */
//         for (i = k; i < m; ++i) 
//         {
//             path.push_back(matrix[i][n - 1]);
//         }
//         n = n - 1;
 
//         // Push the last row from the remaining rows 
//         if (k < m)
//         {
//             for (i = n - 1; i >= l; --i) 
//             {
//                 path.push_back(matrix[m - 1][i]);
//             }
//             m = m - 1;
//         }
 
//         // Push the first column from the remaining columns 
//         if (l < n) 
//         {
//             for (i = m - 1; i >= k; --i) 
//             {
//                 path.push_back(matrix[i][l]);
//             }
//             l = l + 1;
//         }
//     }

//     return path;
// }



// // 54. Spiral Matrix
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:

// // WHILE LOOP KI JAROORAT HAI BAHAR

//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int m = matrix[0].size();
//         int n = matrix.size();
//         cout<<"m: "<<m<<endl;
//         cout<<"n: "<<n<<endl;
//         // while (i != matrix.size()/2 && j != matrix[i].size()/2)
//         // {
//         //     /* code */
//         // }
        
//         int i = 0;
//         int j = 0;
//             cout<<"1st loop => ";
//         for ( ; j < m; j++)
//         {
//             ans.push_back(matrix[i][j]);
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<"   i: "<<i<<" j: "<<j<<"  ";
//         cout<<"right"<<endl;


//         if(n>1){

        
//         j = j - 1;
//             cout<<"2nd loop => ";
//         for ( i = i + 1; i < n ; i++)
//         {
//             ans.push_back(matrix[i][j]);
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<"   i: "<<i<<" j: "<<j<<"  ";
//         cout<<"down"<<endl;


        
//         i = i - 1;
//             cout<<"3rd loop => ";
//         for (j = j - 1 ; j >= 0; j--)
//         {
//             ans.push_back(matrix[i][j]);
//             cout<<matrix[i][j]<<" ";
//         }
//         if(ans.size() == n*m){
//             // cout<<"ans size:"<<ans.size()<<endl;
//             return ans;
//         }
//         cout<<"   i: "<<i<<" j: "<<j<<"  ";
//         cout<<"left"<<endl;

        
        
//         i = i - 1;
//             cout<<"4th loop => ";
//         for (j = j + 1; j < m-1; j++)
//         {
//             ans.push_back(matrix[i][j]);
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<"   i: "<<i<<" j: "<<j<<"  ";
//         cout<<"up"<<endl;
//         }

//         return ans;
//     }
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


// // class Solution {
// // public:
// //     vector<int> spiralOrder(vector<vector<int>>& matrix) {
// //         vector<int> ans;
// //         int m = matrix[0].size();
// //         int n = matrix.size();
// //         int i = 0;
// //         int j = 0;
// //         for ( ; j < m; j++)
// //         {
// //             ans.push_back(matrix[i][j]);
// //         }
// //         j = j - 1;
// //         for ( i = i + 1; i < n ; i++)
// //         {
// //             ans.push_back(matrix[i][j]);
// //         }
// //         i = i - 1;
// //         for (j = j - 1 ; j >= 0; j--)
// //         {
// //             ans.push_back(matrix[i][j]);
// //         }
// //         i = i - 1;
// //         for (j = j + 1; j < m-1; j++)
// //         {
// //             ans.push_back(matrix[i][j]);
// //         }
// //         return ans;
// //     }
// // };