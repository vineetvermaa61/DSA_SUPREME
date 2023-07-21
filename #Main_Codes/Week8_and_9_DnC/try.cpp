#include<iostream>
#include<vector>
using namespace std; 
 bool isSafe(int row, int col, vector<vector<int>>& board, int value){
        int n = board.size();
        for (int i = 0; i < n; i++)
        {
            // row check
            // agar board ke row ki koi bhi value, value ke barabar hai to false return kar do
            if(board[row][i] == value){
                return false;
            }

            // col check
            if(board[i][col] == value){
                return false;
            }

            // 3*3 box check
            if(board[3*(row/3) + (i/3)][3*(col/3) + (i%3)] == value){
                return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<int>>& board){
        int n = board.size();
        for(int i = 0; i < n;i++){
            for (int j = 0; j < n; j++)
            {
                // check for empty cell
                if(board[i][j] == 0){
                    // try to fill with values ranging from 1 to 9
                    for (int val = 1; val <= 9; val++)
                    {
                        //  check for safety
                        if(isSafe(i,j, board, val)){
                            // insert
                            board[i][j] = val;
                            // baki recursion sambhal lega
                            bool remainingMAtrixSolution = solve(board);
                            if (remainingMAtrixSolution == true){
                                return true;
                            }
                            else{
                            // backtracking
                            board[i][j] = 0;
                            }
                    
                        }

                    }
                    // agar 1-9 tak koi bhi value se solution nahin nikla, current cell par, that means kahin par galti hai, go back by returning false
                    // hum bool solve() ko hi false return kar rahe hain
                    return false;
                }
            }
            
        }
        // all cells filled
        return true;
    }
vector<vector<int>> solveSudoku(vector<vector<int>> &board) {
   
    solve(board);
     vector<int> ans;
     vector<vector<int>> ans2;
    int n = board.size();

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n;j++){
            ans.push_back(board[i][j]);
        }
        ans2.push_back(ans);
    }

    return ans2;
}
int main(){
    
    vector<vector<int>> arr{{0 ,8, 0, 0 ,0 ,0 ,5 ,0, 2},
                            {0 ,0 ,4 ,0, 0, 5 ,0 ,0 ,0},
                            {3 ,0 ,0 ,0, 4, 0 ,8 ,0 ,0},
                            { 0 ,0, 0, 0, 0, 6 ,0, 0, 0},
                            { 0 ,0, 0 ,0 ,0 ,0 ,0 ,6 ,9},
                            {0 ,0, 0 ,2, 0, 0, 0, 0, 0},
                            {0 ,1 ,0 ,0 ,5 ,0, 2, 0, 8},
                            { 7 ,6 ,0, 0 ,0 ,0 ,0, 0, 0},
                            { 2 ,0, 0 ,9 ,0 ,0 ,1 ,0 ,0}};
    solveSudoku(arr);
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // cout<<"_____________________"<<endl<<endl;
    // vector<vector<int>> solveSudoku(arr);
    // // int n = arr.size();
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;

}