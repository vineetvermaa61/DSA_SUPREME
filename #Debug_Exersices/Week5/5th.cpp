#include <iostream>  
using namespace std;  
int main() {  
    char char_array[] = {'L','A','K','S','H','A','Y'};  
    int array_size = sizeof(char_array)/sizeof(char);  
    cout<<array_size<<endl;
    string j = "";  
    int i;  
    for(i = 0; i < array_size; i++) {    
        j = j + char_array[i];  
    }  
    cout << j <<endl;  
}

// GIVEN:
// #include <iostream>  
// using namespace std;  
// int main() {  
//     char char_array[] = {'L','A','K','S','H','A','Y'};  
//     int array_size = sizeof(char_array);  
//     string j = "";  
//     int i;  
//     for(i = 0; i < array_size; i++) {    
//         j = j + char_array[i];  
//     }  
//     cout << j <<endl;  
// }

// SOLUTION:
// #include <iostream>  
// using namespace std;  
// int main() {  
//     char char_array[] = {'L','A','K','S','H','A','Y'};  
//     int array_size = sizeof(char_array) /  sizeof(char);  
//     string j = "";  
//     int i;  
//     for(i = 0; i < array_size; i++) {    
//         j = j + char_array[i];  
//     }  
//     cout << j <<endl;  
// }   