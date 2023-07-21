// 2. Print full pyramid like an Equilateral Triangle
//           1         
//         1 2 1       
//       1 2 3 2 1     
//     1 2 3 4 3 2 1   
//   1 2 3 4 5 4 3 2 1 

#include <iostream>
using namespace std;
int main()
{
int k, n=4;
// cout << "Enter the number of rows : ";
// cin >> n;
cout << " ";

// outmost loop
for (int i=1; i<=n; i++){  // ok

// spaces
for (int j=1; j<=n-i; j++){
cout << " "; // ok
}

// forward counting
int j=1;
for ( ; j<=i; j++){
cout << j;
}

int k = j-2;
for (   ; k > 0; k--)
{
    /* code */
    cout<<k;
}

cout << endl;
cout << " ";

}
return 0;
}

// // GIVEN:
// #include <iostream>
// using namespace std;
// int main()
// {
// int k, n;
// cout << "Enter the number of rows : ";
// cin >> n;
// cout << " ";
// for (int i=1; i<=n; i++)
// {

// for (int j=1; j<=n-i; j++)
// cout << " ';

// for (j=1,k=i-1; j<=2*i-1; j++,k--)
// {
// if (1 || j <= k)
// cout << j;
// else
// cout << k;
// }
// cout << endl;

// cout << " ";

// }
// return 0;
// }

// SOLUTION:
// #include <iostream>
// using namespace std;
// int main()
// {
// int k, n;
// cout << "Enter the number of rows : ";
// cin >> n;
// cout << " ";
// for (int i=1; i<=n; i++)
// {

// for (int j=1; j<=n-i; j++)
// cout << " ";

// int j=1;
// for (j=1,k=2*i-1; j<=2*i-1; j++,k--)
// {
// if (j <= k)
// cout << j;
// else
// cout << k;
// }
// cout << endl;

// cout << " ";

// }
// return 0;
// }