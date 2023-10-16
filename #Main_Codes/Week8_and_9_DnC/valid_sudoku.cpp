#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isSafe(vector<vector<char>> &board, char value, int row, int col)
    {
        int n = board.size();
        for (int i = 0; i < n; i++)
        {
            // row check
            if (board[row][i] == value)
            {
                return false;
            }
        }
        for (int i = 0; i < n; i++)
        {
            // col check
            if (board[i][col] == value)
            {
                return false;
            }
        }
        for (int i = 0; i < n; i++)
        {
            // 3*3 box check
            if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == value)
            {
                return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>> &board)
    {
        int n = board.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char value = board[i][j];
                if (value >= '1' && value <= '9')
                {
                    board[i][j] = '.';
                    if (isSafe(board, value, i, j) == false)
                    {
                        return false;
                    }
                    // backtracking
                    board[i][j] = value;
                }
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}