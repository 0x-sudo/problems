#include <bits/stdc++.h>
using namespace std;

// Using map - O(m+n * log(m+n)) - using set is also same
// vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
//   map<int, int> freq;
//   vector<int> un;
//
//   for (int i = 0; i < n; i++) {
//     freq[arr1[i]]++;
//   }
//   for (int i = 0; i < m; i++) {
//     freq[arr2[i]]++;
//   }
//   for (auto &it : freq) {
//     un.push_back(it.first);
//   }
//   return un;
// }

// two pointers - O(m+n)
// taking advantage of sorted arrays
vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0;
  vector<int> un;

  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) {
      if (un.size() == 0 || un.back() != arr1[i]) {
        un.push_back(arr1[i]);
      }
      i++;
    } else {
      if (un.size() == 0 || un.back() != arr2[j]) {
        un.push_back(arr2[j]);
      }
      j++;
    }
  }

  while (i < n) {
    if (un.back() != arr1[i]) {
      un.push_back(arr1[i]);
    }
    i++;
  }

  while (j < m) {
    if (un.back() != arr2[j]) {
      un.push_back(arr2[j]);
    }
    j++;
  }

  return un;
}

// Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of
// two sorted arrays.
int main() {
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};

  int n = sizeof(arr1) / sizeof(arr1[0]);
  int m = sizeof(arr2) / sizeof(arr2[0]);

  vector<int> result = findUnion(arr1, arr2, n, m);
  for (auto &it : result) {
    cout << it << " ";
  }
  cout << endl;
}
