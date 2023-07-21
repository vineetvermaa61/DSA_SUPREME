#include<iostream>
#include<string>
using namespace std;
// ********************cplus plus reference**************************

// Implementation of compare function
bool compareString(string a, string b){
    if(a.length() != b.length()){
        return false;
    }
        for (int i = 0; i < a.length(); i++)
        {
            if(a[i] != b[i]){
                return false;
            }
        }
        
     
    return true;
}
int main(){
    // string create
    string str = "abcdefghij";
    // taking input
    // cout<<"Input string: "; 
    // cin>>str;

    // INPUT WITH SPACES
    // getline(cin,str);

    // output
    cout<<"String is "<<str<<endl;

    // lenght()
    cout<<"length "<< str.length() <<endl;

    // empty()
    cout<<"Empty or not? "<<str.empty()<<endl;
  
    str.push_back('A');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;

    // **********substring of string***********
    cout<< str.substr(0,6) <<endl; // 0th index se start karo aur 6 length ki string lakar do
    cout<<str<<endl;

    // **************COMPARE FUNCTION************
    string  a = "love";
    string  b = "lover";

    if(a.compare(b) == 0){
        cout<<"a and b are exactly same"<<endl;
    }else{
        cout<<"a and b are not same"<<endl;
    }

    // !0 wala case 
    // agar pehli string ka pehla charactor chota hoga(ASCII value kam hogi) to -1 return hoga else +1 (same charactors hone par aage ke liye aise hi check karta rahega)
    string x = "abcd";
    string y = "bcde";
    cout<< x.compare(y) <<endl;

    // ************find()***************
    // returns index from where target string starts
    string st = "hello kase ho sab log";
    string target = "hello";
    // string target = "kya"; // not found case
    cout<< st.find(target) <<endl;

    if(st.find(target) == string::npos){
        cout << "Not found";
    }

    // *****************replace()********************
    string mes = "This is my first message";
    cout<< mes <<endl;
    string rep = "Vineet";
    // 0th charactor se start karo, 4 words ko replace kar do, uski jagah rep likh do
    mes.replace(0,4,rep);
    cout<< mes <<endl;

    // ****************erase()**********************
    string abc = "ABCDEFGIJKLMOPQRSTUV";
    cout<< abc <<endl;
    // 0th index se start karo aur 6 charactor delete kar do
    abc.erase(0,6);
    cout<< abc <<endl;


    return 0;
}