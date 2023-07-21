#include<iostream>
using namespace std;
// FUNCTION OVERLOADING
class Maths{
    public:
    int sum(int a, int b){
        cout<< "I am in first signature"<<endl;
        return a+b;
    }

    int sum(int a, int b, int c){
        cout<< "I am in second signature"<<endl;
        return a+b+c;
    }
    int sum(int a, float b){
        cout<< "I am in third signature"<<endl;
        return a+b+10;
    }
};
int main(){
    Maths o;
    
    // cout<< o.sum(4,5) <<endl;
    // cout<< o.sum(4,5,1) <<endl;
    cout<< o.sum(4,5.12f) <<endl;
    return 0;
}