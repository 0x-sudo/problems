// #include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// Bruteforce - O(N^2)
// vector<int> twoSum(vector<int> &arr, int n, int target) {
//   vector<int> result;
//   for (int i = 0; i < n; i++) {
//     for (int j = i + 1; j < n; j++) {
//       if (arr[i] + arr[j] == target) {
//         result.push_back(i);
//         result.push_back(j);
//         return result;
//       }
//     }
//   }
//   return {-1, -1};
// }

// Hashing - O(N)
vector<int> twoSum(vector<int> &arr, int n, int target) {
  unordered_map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    int num = arr[i];
    int rem = target - num;
    if (mpp.find(rem) != mpp.end()) {
      return {mpp[rem], i};
    }
    mpp[num] = i;
  }
  return {-1, -1};
}

// vector<int> twoSum(vector<int> &arr, int n, int target) {
//   sort(arr.begin(), arr.end());
//   int left = 0, right = n - 1;
//   while (left < right) {
//     int sum = arr[left] + arr[right];
//     if (sum == target) {
//       return {left, right};
//     } else if (sum < target) {
//       left++;
//     } else {
//       right--;
//     }
//   }
//   return {-1, -1};
// }

int main() {
  vector<int> arr = {2, 6, 5, 8, 11};
  int n = arr.size();
  int target = 14;
  vector<int> result = twoSum(arr, n, target);
  cout << result[0] << ", " << result[1] << endl;
}
