#include <bits/stdc++.h>
using namespace std;

// bruteforce O(N^2)
// int longestSubArray(int arr[], int n, int K) {
//   int maxi = 0;
//
//   for (int i = 0; i < n; i++) {
//     int curr = 0;
//     for (int j = i; j < n; j++) {
//       curr += arr[j];
//
//       if (curr == K) {
//         maxi = max(maxi, j - i + 1);
//       }
//     }
//   }
//
//   return maxi;
// }

// hashing O(N * logN)
int longestSubArray(int arr[], int n, int K) {
  int maxi = 0;
  map<int, int> preSumMap;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += arr[i];

    if (sum == K) {
      maxi = max(maxi, i + 1);
    }

    int rem = sum - K;

    if (preSumMap.find(rem) != preSumMap.end()) {
      int len = i - preSumMap[rem];
      maxi = max(maxi, len);
    }

    if (preSumMap.find(sum) == preSumMap.end()) {
      preSumMap[sum] = i;
    }
  }

  return maxi;
}

int main() {
  int arr[] = {-1, 1, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << longestSubArray(arr, n, 1) << endl;
}
