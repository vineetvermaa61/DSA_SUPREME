// #include<iostream>
// using namespace std;
// class Animal{
//     // private:
//     public:
//     // protected:
//     int age;
//     int weight;

//     void eat(){
//         cout<<"Eating"<<endl;
//     }
// };

// // ***INHERITANCE***
// class Dog:public Animal{
//     public:
//     void print(){
//         cout<< this->age <<endl;
//     }
// };
// int main(){

//     Dog d1;
//     // d1.eat();  
//     // cout<< d1.age;   // outside access
//     d1.print(); // inside access
//     return 0;
// }

// // SINGLE LEVEL INHERITANCE
// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     string name;
//     int weight;
//     int age;

//     void speedUp(){
//         cout<<"Speeding Up"<<endl;
//     }

//     void mreakMaro(){
//         cout<<"Maaro Break"<<endl;
//     }
// };

// class RangeRover : public Car{
//     public:
// };
// int main(){
//     RangeRover rr;
//     rr.speedUp();
//     return 0;
// }

// // MULTI LEVEL INHERITANCE
// #include<iostream>
// using namespace std;
// class Fruit{
//     public:
//     string name = "Aaam";
// };

// class Mango : public Fruit{
//     public:
//     int weight;
// };

// class Alphanso : public Mango{
//     public:
//     int age;
// };
// int main(){
//     Alphanso rr;
//     cout<< rr.name <<" "<<rr.weight <<" "<< rr.age << endl;
//     return 0;
// }

// // MULTIPLE INHERITANCE
// #include<iostream>
// using namespace std;

// class A{
//     public:
//     int physics = 0;
// };

// class B{
//     public:
//     int chemistry = 1;
// };

// class C : public A, public B{
//     public:
//     int maths = 2;
// };
// int main(){
//     C rr;
//     cout<< rr.physics <<" "<<rr.chemistry <<" "<< rr.maths << endl;
//     return 0;
// }


// // DIAMOND PROBLEM
// #include<iostream>
// using namespace std;

// class A{
//     public:
//     int chemistry = 0;
// };

// class B{
//     public:
//     int chemistry = 1;
// };

// class C : public A, public B{
//     public:
//     int maths = 2;
// };
// int main(){
//     C obj;
//     // obj.A :: chemistry   -> A ke object ka chemistry
//     cout<< obj.A :: chemistry <<" "<<obj.B :: chemistry <<" "<< obj.maths << endl;
//     return 0;
// }

// HEIRARICAL INHERITANCE
#include<iostream>
using namespace std;

class A{
    public:
    void inherit(){
        cout<< "Herarical Inheritance" <<endl;
    }
};

class B : public A{

};

class C : public A{

};
int main(){
    B b;
    b.inherit();

    C c;
    c.inherit();
    
    return 0;
}