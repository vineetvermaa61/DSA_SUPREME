// 54. ZIG-ZAG Matrix
// *****************************************IMPORTANT**********************************************
// #include<iostream>
// #include<vector>
// using namespace std;
//     class Solution {
// public:
//     vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int m = matrix.size();
//         int n = matrix[0].size();
//         int total_element = m*n;

//         int startingRow = 0;
//         int endingRow = m-1;
//         int SR = startingRow;
//         int count = 0;
//         int i = startingRow;
//         int j = startingRow;
//     cout<<"3"<<endl;
//         while(count < total_element){
            
//     cout<<"4"<<endl;
           
//             while (i != j && count <= total_element)
//             {
//                 ans.push_back(matrix[i][j]);
//     cout<<"5"<<endl;
//                 count++;
//                 cout<<"count: "<<count<<endl;
//                 i--;
//                 j++;
//             } 
            
//     cout<<"6"<<endl;

//             // for (  ; i == j; i--,j++)
//             // {
//             //     ans.push_back(matrix[i][j]);
//             // }
            
//             i = i +2 ;
//             j = j +1;

//             do
//             {
//     cout<<"7"<<endl;
//                 ans.push_back(matrix[i][j]);
//                 count++;
//                 i++;
//                 j--;
//             } while (i != j && count <= total_element);

//             // for (  ; i == j; i++,j--)
//             // {
//             //     ans.push_back(matrix[i][j]);
//             // }

//             i = i +1;
//             j = j + 2;
             
//     cout<<"8"<<endl;
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
//     cout<<"1"<<endl;
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < matrix[0].size(); j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
    
//     }
//         cout<<endl;
//     cout<<"2"<<endl;

//     vector<int> ans;
//     ans = sol.findDiagonalOrder(matrix);
//     cout<<"3"<<endl;
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
//         // *********************************IMPORTANT********************************
//         // *** MAKE A PROPER CLEAN DIAGRAM WITH INDEXES TO PRINT THIS PATTERN *** 
// public:
//     vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int m = matrix.size();
//         int n = matrix[0].size();
//         cout<<"m: "<<m<<endl;
//         cout<<"n: "<<n<<endl;
//             int col = 0;
//             int row = 0;
//             // prints till last column, along column
//             if(n == 1){
//                 for (int i = 0; i < m; i++)
//                 {
//                     ans.push_back(matrix[i][0]);
//                     // cout<<matrix[i][0]<<" "<<endl;

//                 }
//                     return ans;
//             }
//             if(m == 1){
//                 for (int i = 0; i < n; i++)
//                 {
//                     ans.push_back(matrix[0][i]);
//                     // cout<<matrix[i][0]<<" "<<endl;

//                 }
//                     return ans;
//             }
//             for ( ; col < n; col++)
//             {
//                 if (col % 2 == 0)
//                 {
//                     // even index 
//                     for(int i = col, j = row ; i < m && j<n && i>=0 && j>=0 ; i--, j++){
//                         ans.push_back(matrix[i][j]);
//                     }
//                 }else{
//                     // odd index -> change print direction
//                     for(int i = row, j = col; i < m && j<n && i>=0 && j>=0; i++,j--){
//                         ans.push_back(matrix[i][j]);
//                     }
//                 }
                
//             } 

//             // m -> row
//             // n -> col
//             // printing till last row, along row 
//             col = n;  //  
//             row = m;      // OR  row = 1; 
//             for (row = 1 ; row < m; row++)
//             {
//                 // even index
//                 if (row % 2 == 0)
//                 {
//                     for(int i = row, j = col ; i < n && j<m && i>=0 && j>=0 ; i++, j--){
//                         ans.push_back(matrix[i][j]);
//                     }
//                 // odd index -> change print direction
//                 }else{
//                     for(int i = row, j = col; i < n && j<m && i>=0 && j>=0; i--,j++){
//                         ans.push_back(matrix[i][j]);
//                     }
//                 }
                
//             }
            
    
//         return ans;}
// };

// int main(){
//     Solution sol;
//     // vector<vector<int> > matrix{{1,2},{3,4}};
//     vector<vector<int> > matrix{{2,5},{8,4},{0,-1}};
//     // vector<vector<int> > matrix{{3,2}};
//     // vector<vector<int> > matrix{{3},{2}};
//     // vector<vector<int> > matrix{{1,2,3},{4,5,6},{7,8,9}};
//     // vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     // vector<vector<int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     // cout<<"1"<<endl;
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < matrix[0].size(); j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
    
//     }
//         cout<<endl;
//     // cout<<"2"<<endl;

//     vector<int> ans;
//     ans = sol.findDiagonalOrder(matrix);
//     // cout<<"3"<<endl;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
    class Solution {
        // *********************************IMPORTANT********************************
        // *** MAKE A PROPER CLEAN DIAGRAM WITH INDEXES TO PRINT THIS PATTERN *** 
        // ** DRY RUN ** DRY RUN ** DRY RUN ** DRY RUN ** DRY RUN ** DRY RUN ** DRY RUN **
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size(); // row
        int n = matrix[0].size(); // col

        int row = 0;
        int col = 0;
        // int i = 0;
        bool up = true;

        while(row < m && col < n){
            // if diagonal is going up
            if(up){
                while(row>0 && col < n-1){
                    ans.push_back(matrix[row][col]);
                    // i++;
                    row--;
                    col++;
                }
                    ans.push_back(matrix[row][col]);
                    // i++;
                    if(col == n-1){
                        row++;
                    }else{
                        // cout<<"Row->"<<row<<" "<<"col->"<<col<<" "<<endl;
                        col++;
                    }
            }
            else{
                while(col>0 && row<m-1){
                    ans.push_back(matrix[row][col]);
                    // i++;
                    row++;
                    col--;
                }
                    ans.push_back(matrix[row][col]);
                    // i++;
                    if(row == m-1){ 
                        col++;
                    }else{
                        row++;
                    }
            }
            up=!up;
        }
            
    
        return ans;
        }
};

int main(){
    Solution sol;
    // vector<vector<int> > matrix{{1,2},{3,4}};
    // vector<vector<int> > matrix{{2,5},{8,4},{0,-1}};
    // vector<vector<int> > matrix{{3,2}};
    // vector<vector<int> > matrix{{3},{2}};
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
    ans = sol.findDiagonalOrder(matrix);
    // cout<<"3"<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}