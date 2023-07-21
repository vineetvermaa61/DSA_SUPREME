// //1// Checking If key present or not:
// #include<iostream>
// using namespace std;

// // bool checkKey(string str, char key, int i , int length){
// bool checkKey(string& str, char& key, int i , int& length){  // MORE PREFERABLE
//     // base case - rookna kab hai
//     if(i >= length){ 
//         // key not found
//         return false;
//     }

//     // 1 case solve kar do
//     if(str[i] == key){
//         return true;
//     }
//     // baaki recursion sambhal lega
//     return checkKey(str,key,i+1,length);
// }
// int main(){
//     string str = "vineet verma";
//     char key = 'n';
//     int i = 0;
//     int lenght = str.length();
//     bool ans = checkKey(str, key, i, lenght);
//     cout<<"Answer is: "<<ans<<endl;
//     return 0;
// }


// //2// If key present then return index:
// #include<iostream>
// using namespace std;

// // bool checkKey(string str, char key, int i , int length){
// int checkKey(string& str, char& key, int i , int& length){  // MORE PREFERABLE
//     // base case - rookna kab hai
//     if(i >= length){ 
//         // key not found
//         return -1;
//     }

//     // 1 case solve kar do
//     if(str[i] == key){
//         return i;
//     }
//     // baaki recursion sambhal lega
//     return checkKey(str,key,i+1,length);
// }
// int main(){
//     string str = "vineet verma";
//     char key = 'n';
//     int i = 0;
//     int lenght = str.length();
//     int ans = checkKey(str, key, i, lenght);
//     cout<<"Answer is: "<<ans<<endl;
//     return 0;
// }


// //3// Jab bhi key mile to index return karo:
// #include<iostream>
// using namespace std;

// // bool checkKey(string str, char key, int i , int length){
// void checkKey(string& str, char& key, int i , int& length){  // MORE PREFERABLE
//     // base case - rookna kab hai
//     if(i >= length){ 
//         // key not found
//         return;
//     }

//     // 1 case solve kar do
//     if(str[i] == key){
//         cout<<i<<" ";
//     }
//     // baaki recursion sambhal lega
//     return checkKey(str,key,i+1,length);
// }
// int main(){
//     string str = "vineet verma";
//     char key = 'e';
//     int i = 0;
//     int lenght = str.length();
//     cout<<"Answer is: "<<endl;
//     checkKey(str, key, i, lenght);
//     return 0;
// }


//4// Keys ke index ko store karna:
#include<iostream>
#include<vector>
using namespace std;

// bool checkKey(string str, char key, int i , int length){
void checkKey(string& str, char& key, int i , int& length, vector<int>& ans){  // MORE PREFERABLE
    // base case - rookna kab hai
    if(i >= length){ 
        // key not found
        return;
    }

    // 1 case solve kar do
    if(str[i] == key){
        // store in vector
        ans.push_back(i);
    }
    // baaki recursion sambhal lega
    return checkKey(str,key,i+1,length,ans);
}
int main(){
    string str = "vineet verma";
    char key = 'e';
    int i = 0;
    int lenght = str.length();
    vector<int> ans;
    checkKey(str, key, i, lenght,ans);
    cout<<"Printing answer: "<<endl;
    for(auto val: ans){
        cout<< val <<" ";
    }
    cout<< endl;
    return 0;
}

// //5// Count occurences of Keys:
// #include<iostream>
// #include<vector>
// using namespace std;

// // bool checkKey(string str, char key, int i , int length){
// void checkKey(string& str, char& key, int i , int& length, int& count){  // MORE PREFERABLE
//     // base case - rookna kab hai
//     if(i >= length){ 
//         // key not found
//         return;
//     }

//     // 1 case solve kar do
//     if(str[i] == key){
//         // store in vector
//         count++;
//     }
//     // baaki recursion sambhal lega
//     return checkKey(str,key,i+1,length,count);
// }
// int main(){
//     string str = "vineet verma";
//     char key = 'e';
//     int i = 0;
//     int lenght = str.length();
//     int count = 0;
//     checkKey(str, key, i, lenght,count);
//     cout<<"Counting is: "<<count<<endl;
//     return 0;
// }