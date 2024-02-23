#include <bits/stdc++.h>
using namespace std;

// bruteforce ~= O(2N)
// vector<int> moveZeros(int n, vector<int> arr) {
//   vector<int> temp;
//
//   for (int i = 0; i < n; i++) {
//     if (arr[i] != 0) {
//       temp.push_back(arr[i]);
//     }
//   }
//
//   int nz = temp.size();
//
//   for (int i = 0; i < nz; i++) {
//     arr[i] = temp[i];
//   }
//
//   for (int i = nz; i < n; i++) {
//     arr[i] = 0;
//   }
//
//   return arr;
// }

// 2 pointers O(N)
vector<int> moveZeros(int n, vector<int> arr) {
  int j = -1;

  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      j = i;
      break;
    }
  }

  if (j == -1) {
    return arr;
  }

  for (int i = j + 1; i < n; i++) {
    if (arr[i] != 0) {
      swap(arr[i], arr[j]);
      j++;
    }
  }

  return arr;
}

int main() {
  vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
  int n = 10;
  vector<int> ans = moveZeros(n, arr);
}
