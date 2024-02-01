#include <iostream>
using namespace std;

int largestElement(int arr[], int n) {
  int max = arr[0];

  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int arr[] = {8, 10, 5, 7, 9};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << largestElement(arr, n) << endl;
}
