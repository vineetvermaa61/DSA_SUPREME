#include<iostream>
int main() {
  int n;
  std::cin>>n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      printf("  ");
    }
    for (int j = 0; j < i+1 ; j++) {
      printf("%d ", i+j+1);
    }
    int ele = 2 * i;
    for (int j = 1; j <= i; j++) {
      printf("%d ", ele--);
    //   ele--;
    }
    printf("\n");
  }
  return 0;
}

// Given:

// int main() {
//   int n;
//   std::cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i - 1; j++) {
//       printf("  ");
//     }
//     for (int j = i; j < i; j++) {
//       printf("%d ", j);
//     }
//     int ele = 2 * (n - i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//       printf("%d ", ele--);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// Solution:

// #include<iostream>
// int main() {
//   int n;
//   std::cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i; j++) {
//       printf("  ");
//     }
//     for (int j = i; j < 2 * i; j++) {
//       printf("%d ", j);
//     }
//     int ele = 2 * (i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//       printf("%d ", ele--);
//     }
//     printf("\n");
//   }
//   return 0;
// }