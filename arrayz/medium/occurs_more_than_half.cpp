#include <bits/stdc++.h>
using namespace std;

// bruteforce O(N^2)
// int majorityElement(vector<int> &arr) {
//   int n = arr.size();
//
//   for (int i = 0; i < n; i++) {
//     int cnt = 0;
//     for (int j = 0; j < n; j++) {
//       if (arr[j] == arr[i]) {
//         cnt++;
//       }
//     }
//     if (cnt > (n / 2)) {
//       return arr[i];
//     }
//   }
//   return -1;
// }

// Hashing O(N * logN)
int majorityElement(vector<int> &arr) {
  int n = arr.size();

  map<int, int> mpp;

  for (int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }

  for (auto it : mpp) {
    if (it.second > (n / 2)) {
      return it.first;
    }
  }
  return -1;
}

// Given an array of N integers, write a program to return an element that
// occurs more than N/2 times in the given array. You may consider that such an
// element always exists in the array.
int main() {
  vector<int> arr = {4, 4, 2, 4, 3, 4, 4, 3, 2, 4};
  cout << majorityElement(arr) << endl;
}
