#include <iostream>
#include <vector>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    // copy left part of array in 'left' array
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    // copy right part of array in 'right' array
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s; // kyonki main array, original array ka koi part bhi ho sakta hai

    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // copy remaining elements of left array in main array
    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    // copy remaining elements of right array in main array
    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // TODO: delete left and right wala newly created array
}

void mergeSort(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    // base case - rukna kab hai
    // s == e -> single element
    // s > e -> surpassed index
    if (s >= e)
    {
        return;
    }

    // left part sort kardo recursion bhaiya
    mergeSort(arr, s, mid);

    // right part sort kardo recursion bhaiya
    mergeSort(arr, mid + 1, e);

    // now merge 2 sorted arrays
    merge(arr, s, e);
}
int main()
{
    int arr[] = {4, 5, 13, 2, 12};
    int n = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = n - 1;

    // calling merge sort function
    mergeSort(arr, s, e);

    // printing sorted array
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
// void merge(int *arr, int s, int e)
// {
//     int mid = s + (e - s) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     int *left = new int[len1];
//     int *right = new int[len2];
//     int k = s;
//     for (int i = 0; i < len1; i++)
//     {
//         left[i] = arr[k];
//         k++;
//     }
//     k = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         right[i] = arr[k];
//         k++;
//     }
//     int leftIndex = 0;
//     int rightIndex = 0;
//     int mainArrayIndex = s;
//     while (leftIndex < len1 && rightIndex < len2)
//     {
//         if (left[leftIndex] < right[rightIndex])
//         {
//             arr[mainArrayIndex++] = left[leftIndex++];
//         }
//         else
//         {
//             arr[mainArrayIndex++] = right[rightIndex++];
//         }
//     }
//     while (leftIndex < len1)
//     {
//         arr[mainArrayIndex++] = left[leftIndex++];
//     }
//     while (rightIndex < len2)
//     {
//         arr[mainArrayIndex++] = right[rightIndex++];
//     }
// }
// void mergeSort(int *arr, int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }
//     int mid = s + (e - s) / 2;
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid + 1, e);
//     merge(arr, s, e);
// }
// int main()
// {
//     // vector<int> arr{4, 12, 9, 1, 6};
//     int arr[] = {4, 12, 9, 1, 6};
//     int n = sizeof(arr) / sizeof(int);
//     // int n = arr.size();
//     int s = 0;
//     int e = n - 1;
//     mergeSort(arr, s, e);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }