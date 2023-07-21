#include<vector>
#include<iostream>
using namespace std;

int main(){
        // NOTE: yahan space dena > > ke beech mein
    vector<vector<int> > arr;
    // bahar wale vector ke andar 'vector <int>' type ka data push hoga aur andar wale vector ke andar 'int' type ka data push hoga

    vector<int> a{1,2,3};
    vector<int> b{2,4,7,3,9};
    vector<int> c{8,6};
 
//  'arr' outer vector ko denote kar raha hai aur hum outer vector ke andar 'vector int' type ka data push kar rahe hain
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; i < arr.size(); i++)
    {
        // arr[0].size() => kyonki har row ke andar no. of columns same hain, 0 or 1 or 2 bhi likh sakte hain
        //  hum arr[i] bhi likh sakte hain agar colums har row mein different honge to 

        // for (int j = 0; j < arr[0].size(); j++)
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int rows = 5;
    int cols = 5;

                                // no of cols, sabhi elements ko -212 se initialize  kar do
    vector<vector <int> > brr(rows, vector<int>(cols, -8));

    for (int i = 0; i < brr.size(); i++)
    {
    for (int j = 0; j < brr[i].size(); j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Printing a value at 2nd row and 3rd column(which is -8): "<<brr[2][3]<<endl;
    
    cout<<"Input a value at 3rd row and 2nd column: ";
    cin>>brr[2][3];
    cout<<brr[2][3]<<endl;
    cout<<"Printing a value at 3rd row and 2nd column: ";
    cout<<brr[2][3]<<endl;

    // // column wise print:
    // for (int i = 0; i < brr.size(); i++)
    // {
    // for (int j = 0; j < brr[i].size(); j++)
    //     {
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}