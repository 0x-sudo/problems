#include <bits/stdc++.h>
using namespace std;

// Bruteforce - Merge Sort - O(N* logN)
// void merge(vector<int> &arr, int low, int mid, int high) {
//   vector<int> temp;
//   int left = low;
//   int right = mid + 1;
//
//   while (left <= mid && right <= high) {
//     if (arr[left] <= arr[right]) {
//       temp.push_back(arr[left]);
//       left++;
//     } else {
//       temp.push_back(arr[right]);
//       right++;
//     }
//   }
//
//   while (left <= mid) {
//     temp.push_back(arr[left]);
//     left++;
//   }
//
//   while (right <= high) {
//     temp.push_back(arr[right]);
//     right++;
//   }
//
//   for (int i = low; i <= high; i++) {
//     arr[i] = temp[i - low];
//   }
// }
//
// void sortArr(vector<int> &arr, int low, int high) {
//   if (low >= high)
//     return;
//   int mid = (low + high) / 2;
//   sortArr(arr, low, mid);
//   sortArr(arr, mid + 1, high);
//   merge(arr, low, mid, high);
// }

// keeping count O(N) + O(N)
// void sortArr(vector<int> &arr, int n) {
//   int cnt0 = 0, cnt1 = 0, cnt2 = 0;
//
//   for (int i = 0; i < n; i++) {
//     if (arr[i] == 0)
//       cnt0++;
//     else if (arr[i] == 1)
//       cnt1++;
//     else
//       cnt2++;
//   }
//
//   for (int i = 0; i < cnt0; i++)
//     arr[i] = 0;
//
//   for (int i = cnt0; i < cnt0 + cnt1; i++)
//     arr[i] = 1;
//
//   for (int i = cnt0 + cnt1; i < n; i++)
//     arr[i] = 2;
// }

// 3 pointers O(N)
void sortArr(vector<int> &arr, int n) {
  int low = 0, mid = 0, high = n - 1;

  while (mid <= high) {
    if (arr[mid] == 0) {
      swap(arr[low], arr[mid]);
      low++;
      mid++;
    } else if (arr[mid] == 1) {
      mid++;
    } else {
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}

// Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place
// sort the array without using inbuilt sort functions. Expected: Single
// pass-O(N) and constant space
int main() {
  vector<int> arr = {2, 0, 2, 1, 1, 0};
  int n = arr.size();
  // sortArr(arr, 0, n - 1);
  sortArr(arr, n);
  for (auto &it : arr) {
    cout << it << " ";
  }
  cout << endl;
}
