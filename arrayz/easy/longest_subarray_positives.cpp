#include <bits/stdc++.h>
using namespace std;

// two loops - O(N^2)
// int longestSubArray(int arr[], int n, int K) {
//   int maxi = 0;
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
//   return maxi;
// }

// Hashing - O(N*logN)
// int longestSubArray(int arr[], int n, int K) {
//   map<int, int> preSumMap;
//   int sum = 0;
//   int maxi = 0;
//
//   for (int i = 0; i < n; i++) {
//     sum += arr[i];
//
//     if (sum == K) {
//       maxi = max(maxi, i + 1);
//     }
//
//     int rem = sum - K;
//
//     if (preSumMap.find(rem) != preSumMap.end()) {
//       int len = i - preSumMap[rem];
//       maxi = max(maxi, len);
//     }
//
//     if (preSumMap.find(sum) == preSumMap.end()) {
//       preSumMap[sum] = i;
//     }
//   }
//   return maxi;
// }

// Two pointers - O(2N) i.e. inner loop runs for n time in total, rather than
// runnig for n times everytime
int longestSubArray(int arr[], int n, int K) {
  int maxi = 0;
  int left = 0, right = 0;

  int sum = arr[0];

  while (right < n) {
    while (left <= right && sum > K) {
      sum -= arr[left];
      left++;
    }

    if (sum == K) {
      maxi = max(maxi, right - left + 1);
    }

    right++;

    if (right < n)
      sum += arr[right];
  }

  return maxi;
}

/* Given an array and a sum k, we need to print the length of the longest
 * subarray that sums to k.
 */
int main() {
  int arr[] = {2, 3, 5, 1, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 10;
  cout << longestSubArray(arr, n, k) << endl;
}
