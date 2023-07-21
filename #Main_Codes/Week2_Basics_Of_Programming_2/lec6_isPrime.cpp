// #include<iostream>
// using namespace std;
// int isPrime(int n){
//     for (int i = 2; i < n; i++)
//     {
//         if (n%i == 0)
//         {
//         return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n; cin>>n;
//     if (isPrime(n))
//     {
//         cout<<"Prime"<<endl;
//     }
//     else{
//         cout<<"Not Prime"<<endl;
//     }
    
//     return 0;
// }


// Printing prime numbers
#include<iostream>
using namespace std;
int isPrime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
        return 0;
        }
    }
    return 1;
}
int main(){
    int n; cout<<"Number : " ; cin>>n;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
    {
        cout<<i<<" ";
    }
    }
    
    return 0;
}