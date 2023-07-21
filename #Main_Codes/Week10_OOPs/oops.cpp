#include<iostream>
using namespace std;
class Animal{
    // state or properties
    private:
    int weight;
    public:
    int age;
    string type;

    // behaviour
    void eat(){
        cout<<"Eating"<<endl;
    }

    void sleep(){
        cout<<"Sleeping"<<endl;
    }

    // for accessing private member
    int getWeight(){
        return weight;
    }

    void setWeight(int w){
        weight = w;
    }

    // default constructor
    Animal(){
        cout<<"constructor called"<<endl;
    }

    // parameterized constructor
    // ******JAB BHI CONSTRUCTOR CALL HO/OBJECT CREATE HO TO AGE KO DEFAULT YE SET KAR DO*******
    Animal(int age){
        this->age = age;
        cout<<"parameterized constructor called"<<endl;
    }

    Animal(int age, int weight){
        this->age = age;
        this->weight = weight;
        cout<<"parameterized constructor 2 called"<<endl;
    }

    Animal(int age, int weight, string type){
        this->age = age;
        this->weight = weight;
        this->type = type;
        cout<<"parameterized constructor 3 called"<<endl;
    }

    // *******copy constructor***MMMMI FOR INTERVIEWS*********
    Animal(Animal &obj){  // pass by reference nahin karenge to pass by value ho jayega jismein copy create hoti hai, jo copy constructor ko call karega,copy constructor phir pass by value karega and so on... aur hum infinite loop mein phas jayenge
    // 'a' is 'Animal &obj'
    // 'b' is 'Animal'
    
    this->age = obj.age; // Animal wali object ke liye jo age hai use is copy constructor ke through abhi jo current object create karke call kiya hai function ko uske object ki age ke barabar kar do 
    this->weight = obj.weight;
    this->type = obj.type;
    cout<<"I am inside copy constructor "<<endl;
    }

    void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->type<<endl;
    }

    // ************destructor*********** 
    ~Animal(){
        cout<<"I am inside destructor"<<endl;
    }

};
int main(){
    // // ********Static memory allocation: (creation of object)*******
    // Animal ramesh;
    // ramesh.age = 12;
    // ramesh.type = "Lion";
    // cout<<"Age of ramesh is "<< ramesh.age <<endl;
    // cout<<"Type of ramesh is "<< ramesh.type <<endl;

    // ramesh.eat();
    // ramesh.sleep();

    // // to access priavte member
    // ramesh.setWeight(101);
    // cout<<"Weight of ramesh "<<ramesh.getWeight() <<endl;

    // // *********Dynamic memory allocation (creation of object)********

    // // Animal (data) type ka, ek object suresh create kar do, is type ka new (naya) object banakar heap mein allocate karo (NOTE: ye ek address return karega)
    // Animal* suresh = new Animal;

    // // (way-1)
    // // kyonki suresh mein address stored hai
    // (*suresh).age = 15;
    // (*suresh).type = "billi";

    // // alternate - dynamic (way-2)
    // suresh->age = 17;
    // suresh->type = "baby";

    // suresh->eat();
    // suresh->sleep();

    //*******CONSTRUCTOR***********
    // Animal a;
    // Animal* b = new Animal;

    // It will search for matching no of parameters and data type of parameters and then call the constructor
    // Animal a(10);
    // Animal* b = new Animal(10);

    // Animal a(10,10);
    // Animal* b = new Animal(100,10);

    // Animal a(100,10,"vineet");
    // Animal* b = new Animal(100,10,"vineet");


    //  // *******copy constructor***MMMMI FOR INTERVIEWS*********
    // Animal a(100);
    // Animal* b = new Animal(100,10,"vineet");
    // //  way 1:
    // Animal c = a;  // object a ki values ko c mein copy kar do
    // //  way 2:
    // // d ko initialise kar diya b ki values ke sath
    // Animal d(c);   // object c ki values ko d mein copy kar do
    // Animal e(*b);

    // // *******default copy constructor****************
    // Animal a;
    // a.age = 22;
    // a.setWeight(60);
    // a.type = "babbar";

    // // 'a' object ki values ko 'b' object mein copy kar do
    // Animal b = a;

    // cout<<"a=> ";
    // a.print(); // printing for object a

    // cout<<"b=> ";
    // b.print();  // printing for object b

    // a.type[0] = 'G';  // string charactor can be changed
    // cout<<"a=> ";
    // a.print(); // printing object a
    
    // *******DESTRUCTOR*******

    cout<<"'a' object creation"<<endl;
    // In case of this static object destructor will be called automatically
    Animal a;
    a.age = 5;

    cout<<"'b' object creation"<<endl;
    Animal* b = new Animal();
    b->age = 12;

    // 'manually' calling destructor for 'dynamic object' using 'delete keyword'
    delete b;


    return 0;

}