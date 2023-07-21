#include<iostream>
#include<vector>
using namespace std;
bool binarySearch(vector<vector <int> > matrix, int row, int col, int target){
int s = 0;
int e = row*col - 1;
int mid = s + (e - s)/2;

while(s <= e){
    int rowIndex = mid/col;
    int colIndex = mid%col;
    if(matrix[rowIndex][colIndex] == target){
        cout<<"Found at index: "<<rowIndex<<" "<<colIndex<<endl;
        return true;
    }

    if(matrix[rowIndex][colIndex] < target){
        s = mid + 1;
    }else{
        e = mid - 1;
    }
    mid = s + (e - s)/2;
}
return false;
}

int main(){
    vector<vector <int> > matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

    int row = matrix.size();
    int col = matrix[0].size();

    int target = 19;

    bool ans = binarySearch(matrix,row,col,target);

    if(ans){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}