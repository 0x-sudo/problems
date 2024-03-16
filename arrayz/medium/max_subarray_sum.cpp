#include <bits/stdc++.h>
using namespace std;

// brteforce O(N^3)
int maxSubarraySum(vector<int> &arr) {
  int n = arr.size();
  int maxi = INT_MIN; // maximum sum

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      // subarray = arr[i.....j]
      int sum = 0;

      // add all the elements of subarray:
      for (int k = i; k <= j; k++) {
        sum += arr[k];
      }

      maxi = max(maxi, sum);
    }
  }

  return maxi;
}

// Given an integer array arr, find the contiguous subarray (containing at least
// one number) which has the largest sum and returns its sum and prints the
// subarray.
int main() {
  vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  cout << maxSubarraySum(arr) << endl;
}
