#include <iostream>
#include <vector>
using namespace std;
void printSolution(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(vector<vector<char>> &board, int n, int col, int row)
{
    int i = row;
    int j = col;
    // row check
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }
    // upper left diagonal check
    i = row;
    j = col;
    while (j >= 0 && i >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
        i--;
    }
    // row check
    i = row;
    j = col;
    while (j >= 0 && i < n)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
        i++;
    }
    // kahin par bhi queen nahin mili,iska matlab ye position safe hai, iska matlab return kardo true
    return true;
}

void solve(vector<vector<char>> &board, int n, int col)
{
    // base case
    if (col >= n)
    {
        printSolution(board, n);
        return;
    }
    // 1 case solve kar do, baaki recursion sambhal lega
    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, n, col, row))
        {
            board[row][col] = 'Q';
            solve(board, n, col + 1);
            board[row][col] = '_';
        }
    }
}

int main()
{
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '_'));
    int col = 0;
    solve(board, n, col);
    return 0;
}

// // OPTIMIZED CODE:
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;
// class Solution
// {
// public:
//     unordered_map<int, bool> rowCheck;
//     unordered_map<int, bool> upperLeftDiagonalCheck;
//     unordered_map<int, bool> bottomLeftDiagonalCheck;
//     void printSolution(vector<vector<char>> &board, int n, vector<vector<string>> &ans)
//     {
//         vector<string> temp;
//         for (int i = 0; i < n; i++)
//         {
//             string s = "";
//             for (int j = 0; j < n; j++)
//             {
//                 s.push_back(board[i][j]);
//             }
//             temp.push_back(s);
//         }
//         ans.push_back(temp);
//     }
//     bool isSafe(vector<vector<char>> &board, int n, int col, int row)
//     {
//         if (rowCheck[row] == true)
//         {
//             return false;
//         }
//         if (upperLeftDiagonalCheck[n - 1 + col - row] == true)
//         {
//             return false;
//         }
//         if (bottomLeftDiagonalCheck[col + row] == true)
//         {
//             return false;
//         }
//         return true;
//         // int i = row;
//         // int j = col;
//         // // row check
//         // while (j >= 0)
//         // {
//         //     if (board[i][j] == 'Q')
//         //     {
//         //         return false;
//         //     }
//         //     j--;
//         // }
//         // // upper left diagonal check
//         // i = row;
//         // j = col;
//         // while (j >= 0 && i >= 0)
//         // {
//         //     if (board[i][j] == 'Q')
//         //     {
//         //         return false;
//         //     }
//         //     j--;
//         //     i--;
//         // }
//         // // row check
//         // i = row;
//         // j = col;
//         // while (j >= 0 && i < n)
//         // {
//         //     if (board[i][j] == 'Q')
//         //     {
//         //         return false;
//         //     }
//         //     j--;
//         //     i++;
//         // }
//         // // kahin par bhi queen nahin mili,iska matlab ye position safe hai, iska matlab return kardo true
//         // return true;
//     }
//     void solve(vector<vector<char>> &board, int n, int col, vector<vector<string>> &ans)
//     {
//         // base case
//         if (col >= n)
//         {
//             printSolution(board, n, ans);
//             return;
//         }
//         // 1 case solve kar do, baaki recursion sambhal lega
//         for (int row = 0; row < n; row++)
//         {
//             if (isSafe(board, n, col, row))
//             {
//                 board[row][col] = 'Q';
//                 rowCheck[row] = true;
//                 upperLeftDiagonalCheck[n - 1 + col - row] = true;
//                 bottomLeftDiagonalCheck[col + row] = true;
//                 solve(board, n, col + 1, ans);
//                 rowCheck[row] = false;
//                 upperLeftDiagonalCheck[n - 1 + col - row] = false;
//                 bottomLeftDiagonalCheck[col + row] = false;
//                 board[row][col] = '.';
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n)
//     {
//         vector<vector<char>> board(n, vector<char>(n, '.'));
//         vector<vector<string>> ans;
//         int col = 0;
//         solve(board, n, col, ans);
//         return ans;
//     }
// };
// int main()
// {

//     return 0;
// }