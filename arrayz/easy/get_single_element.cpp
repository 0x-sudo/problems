#include <bits/stdc++.h>
using namespace std;

int getSingleElement(int arr[], int n) {
  int xorr = 0;
  for (int i = 0; i < n; i++) {
    xorr = xorr ^ arr[i];
  }
  return xorr;
}

// Given a non-empty array of integers arr, every element appears twice except
// for one. Find that single one.
int main() {
  int arr[] = {4, 1, 2, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << getSingleElement(arr, n) << endl;
}
