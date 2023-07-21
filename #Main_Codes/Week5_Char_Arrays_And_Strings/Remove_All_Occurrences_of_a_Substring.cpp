#include<iostream>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        // finding position of part string
        int position = s.find(part);
        while(position != string:: npos){
            s.erase(position,part.length());
            position = s.find(part);
        }
    return s;
    }
};
int main(){
    
    return 0;
}