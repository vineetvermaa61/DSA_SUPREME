// This code attempts to rotate a matrix by 60 degrees. Debug it.
// Input:          Output:
// 1 2 3           7 4 1
// 4 5 6           8 5 2
// 7 8 9           9 6 3

// *****************IMPORTANT******************rotated by 90 degree

#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

// takes transpose of matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
        }
    }

// takes reverse of matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n/2; j++)
        {
            swap(matrix[i][j], matrix[i][n-j-1]);
        }
        
    }
    
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, 
                                  {4, 5, 6},
                                  {7, 8, 9}};
    rotate(matrix);

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// GIVEN:
// #include <iostream>
// #include <vector>

// using namespace std;

// void rotate(vector<vector<int>>& matrix) {
//     int n = matrix.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i + j < n) {
//                 swap(matrix[i][j], matrix[n - i - j - 1][n - j - 1]);
//             }
//         }
//     }
// }

// int main() {
//     vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     rotate(matrix);

//     for (int i = 0; i < matrix.size(); i++) {
//         for (int j = 0; j < matrix.size(); j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// SOLUTION:
// #include <iostream>
// #include <vector>

// using namespace std;

// void rotate(vector<vector<int>>& matrix) {
//     int n = matrix.size();

//     for (int i = 0; i < n / 2; i++) { // Fix 1: Only rotate the first half of rows
//         for (int j = i; j < n - i - 1; j++) { // Fix 2: Update the column loop to n-i-1
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[j][n - i - 1];
//             matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
//             matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
//             matrix[j][n - i - 1] = temp;
//         }
//     }
// }

// int main() {
//     vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     rotate(matrix);

//     for (int i = 0; i < matrix.size(); i++) {
//         for (int j = 0; j < matrix.size(); j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }