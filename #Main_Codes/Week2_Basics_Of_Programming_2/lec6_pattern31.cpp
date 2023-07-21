// 1 
// 2 * 3
// 4 * 5 * 6
// 7 * 8 * 9 * 10
// 7 * 8 * 9 * 10
// 4 * 5 * 6
// 2 * 3
// 1
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int count = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<count<<" ";
            if (col != row)
            {
                cout<<"* ";
            }
            
            count++;
        }
        cout<<endl;
    }

        // for n = 4
        // count2 = 11 - 4   (= 7)
    int start = count-n;
    for (int row = 0; row < n; row++)
    {
        int k = start;
        for (int col = 0; col < n-row; col++)
        {
            cout<<k<<" ";
            k++;
            if (col != n-row-1)
            {
                cout<<"* ";
            }
        }      // 7   - (4 -  0  - 1)     ( = 4) 
        start = start - (n - row - 1);
        cout<<endl;
    }
    
    return 0;
}