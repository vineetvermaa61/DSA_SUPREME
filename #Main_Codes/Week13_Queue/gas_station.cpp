#include <iostream>
#include <vector>
using namespace std;
// ***************************STEP BY STEP SOLVE KARO***********************************
// APPROACH1: BRUTE FORCE
int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{

    // OPTIMAL APPROACH:
    int balance = 0;
    int deficit = 0;
    int start = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        balance += gas[i] - cost[i];
        if (balance < 0)
        {
            // jaise hi balance -ve hoga, deficit mein wo -ve values include hongi
            deficit += balance;
            // jahan se -ve hua hai uske aage se start kar do
            start = i + 1;
            // aur balance 0 kar do, aur balance ab yahan se calculate hoga
            balance = 0;
        }
    }
    if (balance + deficit >= 0)
    {
        return start;
    }
    return -1;

    // BRUTE FORCE:
    // if(gas.size() == 0){
    //     return -1;
    // }
    // for(int i=0; i<gas.size(); i++){
    //     int balance = 0;
    //     int distance = 0;
    //     bool flag1 = true;
    //     for(int j=i; j<gas.size(); j++){
    //         balance += gas[j] - cost[j];
    //         if(balance < 0){
    //             flag1 = false;
    //             break;
    //         }
    //     }
    //     if(flag1 == false){
    //         continue;
    //     }
    //     bool flag2 = true;
    //     for(int j=0; j<i; j++){
    //         balance += gas[j] - cost[j];
    //         if(balance < 0){
    //             flag2 = false;
    //             break;
    //         }
    //     }
    //     if(flag2 == true){
    //         return i;
    //     }
    //     else{
    //         continue;
    //     }
    // }
    // return -1;
}
int main()
{
    vector<int> gas{1, 2, 3, 4, 5};
    vector<int> cost{3, 4, 5, 1, 2};
    int ans = canCompleteCircuit(gas, cost);
    cout << "Answer: " << ans << " " << endl;
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;
// // ***************************STEP BY STEP SOLVE KARO***********************************
// // APPROACH2: Using Circular Queue
// int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
// {
//     int front = 0;
//     int rear = 0;
//     if (gas.size() == 0)
//     {
//         return -1;
//     }
//     int balance = 0;
//     while (rear < gas.size())
//     {
//         balance += gas[rear] - cost[rear];
//         if (balance > 0)
//         {
//             rear++;
//         }
//         else
//         {
//             front = rear + 1;
//             rear = front;
//         }
//     }

//     if (rear == gas.size())
//     {
//         rear = 0;
//         front = 0;
//         while (rear != gas.size())
//         {
//             balance += gas[rear] - cost[rear];
//             if (balance > 0)
//             {
//                 rear++;
//                 