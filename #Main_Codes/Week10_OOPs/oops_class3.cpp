// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog : public Animal{
//     public:
//     void speak(){
//         cout<<"Barking"<<endl;
//     }
// };
// int main(){
//     // Dog a;
//     // a.speak();

// // ***************MOST IMPORTANT****************
// // pointer class wala function call hoga
//     // Animal *a = new Animal();
//     // a->speak();

//     // Dog *a = new Dog();
//     // a->speak();

//     // UpCasting
//     // Animal *a = new Dog();  // using 'virtual' keyword on pointer side Class we can call right side's function 
//     // virtual void speak()
//     // a->speak();  

//     // DownCasting
////******* yahan pointer dog type ka object animal type ka ******
//     // Dog *a = (Dog*)new Animal();
//     // a->speak();

//     return 0;
// }


// ***************MOST IMPORTANT 4 CASES IN CASE OF CONSTRUCTOR****************
#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout<< "I am inside animal constructor"<<endl;
    }
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog : public Animal{
    public:
    Dog(){
        cout<< "I am inside Dog constructor"<<endl;
    }
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main(){
    // Dog a;
    // a.speak();

// Right side wali class ka constructor call hoga kyonki us type ka object banega,
// yahan pointer animal type ka object animal type ka
    // Animal *a = new Animal();

    // Dog *a = new Dog();

    // UpCasting
    // Animal *a = new Dog();  // using 'virtual' keyword on pointer side Class we can call right side's function 
    // virtual void speak()

    // DownCasting
//******* yahan pointer dog type ka object animal type ka ******
    Dog *a = (Dog*)new Animal();

    return 0;
}