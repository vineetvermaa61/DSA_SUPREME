// // ********************************************MOST MOST IMPORTANT****************************************************
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    // Step1: choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    // Step2: find correct position for pivot element and place it there
    int count = 0;
    // pivot element 's' par hai to comparison 's+1' se start karenge
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }

    // Jab main is loop se bahar nikla tab mere paas pivot ki right position ka index ready hai
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // Step3: Left mein sare chote aur right mein sare bade
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotIndex)
        {
            i++;
        }
        while (arr[j] > pivotIndex)
        {
            j--;
        }
        // Ab 2 case ho sakte hain
        // A-> You found the element to swap
        // B-> No need to swap
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case - rookna kab hai
    // Jab s == e ho jaye -> single element sorted , ya s > e ho jaye -> invalid array
    if (s >= e)
    {
        return;
    }

    // partition logic, returns pivotIndex
    int p = partition(arr, s, e);

    // recursive call
    // pivot element -> left
    quickSort(arr, s, p - 1);
    // pivot element -> right
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {8, 1, 3, 4, 20, 50, 30};
    // int arr[] = {8,1,3,4,4,20,4,50,30,20,20,30,30,20,1,8,1,1,1,1,8,30};
    int n = 7;
    // int n = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    int e = n - 1;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// // CODING AGAIN:
// #include <iostream>
// #include <vector>
// using namespace std;
// int partition(int arr[], int s, int e)
// {
//     int pivotIndex = s;
//     int pivotElement = arr[s];

//     int count = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (pivotElement >= arr[i])
//         {
//             count++;
//         }
//     }
//     int rightIndex = s + count;
//     swap(arr[pivotIndex], arr[rightIndex]);
//     pivotIndex = rightIndex;

//     int i = s;
//     int j = e;
//     while (i < pivotIndex && j > pivotIndex)
//     {
//         while (arr[i] <= pivotElement)
//         {
//             i++;
//         }
//         while (arr[j] > pivotElement)
//         {
//             j--;
//         }
//         if (i < pivotIndex && j > pivotIndex)
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     return pivotIndex;
// }
// void quickSort(int arr[], int s, int e)
// {
//     // base case
//     if (s >= e)
//     {
//         return;
//     }
//     // finding pivot index using partition and placing chote elements to left aur bade elements to right
//     int p = partition(arr, s, e);

//     // recusive call
//     // left call
//     quickSort(arr, s, p - 1);
//     // right call
//     quickSort(arr, p + 1, e);
// }
// int main()
// {
//     int arr[] = {8, 1, 20, 30, 6, 5, 60, 5};
//     int n = sizeof(arr) / sizeof(int);
//     int s = 0;
//     int e = n - 1;

//     quickSort(arr, s, e);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }