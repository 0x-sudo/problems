#include <bits/stdc++.h>
using namespace std;

// hashing ~= O(2N)
// int findMissing(int arr[], int n) {
//   vector<int> hash(n + 1, 0);
//   // int hash[n + 1] = {0};
//
//   for (int i = 0; i < n - 1; i++) {
//     hash[arr[i]]++;
//   }
//
//   for (int i = 1; i <= n; i++) {
//     if (hash[i] == 0) {
//       return i;
//     }
//   }
//   return -1;
// }

// summation approach O(n)
// int findMissing(int arr[], int n) {
//   int sum1 = (n * (n + 1)) / 2;
//
//   int sum2 = 0;
//   for (int i = 0; i < n - 1; i++) {
//     sum2 += arr[i];
//   }
//   return sum1 - sum2;
// }

// XOR approach O(n)
int findMissing(int arr[], int n) {
  int xor1 = 0, xor2 = 0;

  for (int i = 0; i < n - 1; i++) {
    xor2 = xor2 ^ arr[i];
    xor1 = xor1 ^ (i + 1);
  }

  xor1 = xor1 ^ n;

  return (xor1 ^ xor2);
}

// Given an integer N and an array of size N-1 containing N-1 numbers between 1
// to N. Find the number(between 1 to N), that is not present in the given
// array.
int main() {
  int arr[] = {1, 2, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int ans = findMissing(arr, n);
  cout << "The missing number is: " << ans << endl;
  return 0;
}
