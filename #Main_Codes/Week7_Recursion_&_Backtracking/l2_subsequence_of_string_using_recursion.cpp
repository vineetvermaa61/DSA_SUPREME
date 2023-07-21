// Subsequence of String using Recursion
#include<iostream>
using namespace std;

void printSubsequence(string str,string output,int i){
    // base case - rookna kab hai
    if(i >= str.length()){
        cout<<output<<endl;
        return;
    }

    // include
    printSubsequence(str,output,i+1);

    // exclude

    output.push_back(str[i]);
    // OR 
    // output = output + str[i];
    // OR
    // printSubsequence(str,output + str[i],i+1);

    printSubsequence(str,output,i+1);
}

int main(){
    string str = "abc";
    string output = "";
    int i = 0;
    printSubsequence(str,output,i);
    return 0;
}

// // STORING THE OUTPUT:
// // Subsequence of String using Recursion
// #include<iostream>
// #include<vector>
// using namespace std;

// void printSubsequence(string str,string output,int i,vector<string>& v){
//     // base case - rookna kab hai
//     if(i >= str.length()){
//         // store
//         v.push_back(output);
//         return;
//     }

//     // include
//     // below line is responsible for concatination of output string and ith charactor of str string
//     printSubsequence(str,output,i+1,v);

//     // exclude
//     // output.push_back(str[i]);
//     // 
//     output = output + str[i];
//     printSubsequence(str,output,i+1,v);
// }

// int main(){
//     string str = "abcd";
//     string output = "";
//     int i = 0;
//     vector<string> v;
//     printSubsequence(str,output,i,v);

//     cout<<"Printing all subsequences:"<<endl;
//     for(auto val: v ){
//         cout<<val<<" ";
//     }
//     cout<<endl<<"Size of vector: "<<v.size()<<endl;
//     return 0;
// }