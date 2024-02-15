#include <bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void leftRotate(int arr[], int n, int k) {
  k = k % n;
  Reverse(arr, 0, k - 1);
  Reverse(arr, k, n - 1);
  Reverse(arr, 0, n - 1);
}

// Given an array of integers, rotating array of elements by k elements either
// left or right
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int k = 12;
  int n = sizeof(arr) / sizeof(arr[0]);
  leftRotate(arr, n, k);

  for (auto x : arr) {
    cout << x << ", ";
  }
  cout << endl;
}
