#include<iostream>
using namespace std;
// OPERATOR OVERLOADING
class Parameter{
    public:
    int value;
    void operator+(Parameter& object2){
        int value1 = this->value;
        int value2 = object2.value;
        cout<< value1-value2 <<endl;
    }
};
int main(){
    Parameter object1, object2;
    object1.value = 2;
    object2.value = 7;

    // this should print the difference between them
    object1+object2;
    return 0;
}