#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(int arr[], int n) {
  int count = 0;
  int maxi = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
      count++;
    } else {
      count = 0;
    }
    maxi = max(maxi, count);
  }
  return maxi;
}

// Given an array that contains only 1 and 0 return the count of maximum
// consecutive ones in the array.
int main() {
  int arr[] = {1, 1, 0, 1, 1, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = findMaxConsecutiveOnes(arr, n);
  cout << result << endl;
}
