// #include<iostream>
// #include<string.h>
// #include<algorithm>
// using namespace std;
// // Two pointer approach
// void replaceSpaces(char sentence[]){
//     int i = 0;
//     int n = strlen(sentence);
//     for (int i = 0; i < n; i++)
//     {
//         if(sentence[i] == ' '){
//             sentence[i] = '@';
//         }
//     }
    
// }
// int main(){
//     char sentence[100];
//     // taking input with spaces
//     cout<<"Enter sentence: ";
//     cin.getline(sentence,100); 

//     cout<<"Before : "<<sentence<<endl; 
//     replaceSpaces(sentence);
//     cout<<"After : "<<sentence<<endl;

//     return 0;
// }

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
// Two pointer approach
// void replaceSpaces(char sentence[]){
//     int i = 0;
//     int n = strlen(sentence);
//     for (int i = 0; i < n; i++)
//     {
//         if(sentence[i] == ' '){
//             sentence[i] = '@';
//         }
//     }
    // }

string replaceSpaces(string &str){

    // METHOD:1
	// string ans = "";
	// for(int i = 0; i < str.length(); i++){
	// 	if(str[i] == ' '){
	// 		ans.push_back('@');
	// 		ans.push_back('4');
	// 		ans.push_back('0');
	// 	}else{
	// 		ans.push_back(str[i]);
	// 	}
	// }
	// return ans;

    // METHOD:2
    string part = " ";
	int position = str.find(part);
	while(position != string :: npos){
		str.replace(position,1,"@40");
		position = str.find(part);
	}
    return str;
}
int main(){
    string str = "Coding Ninjas Is A Coding Platform";
    string s = replaceSpaces(str);
    cout<<s<<endl;
    return 0;
}