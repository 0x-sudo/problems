#include <iostream>
using namespace std;

// O(N) single pass solution
int secondLargest(int arr[], int n) {
  if (n < 2) {
    return -1;
  }

  int largest = arr[0];
  int second_largest = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
      second_largest = largest;
      largest = arr[i];
    } else if (arr[i] > second_largest && arr[i] != largest) {
      second_largest = arr[i];
    }
  }
  return second_largest;
}

int main() {
  int arr[] = {1, 2, 4, 7, 7, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << secondLargest(arr, n) << endl;
}
