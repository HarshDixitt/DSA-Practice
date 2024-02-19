#include <iostream>
using namespace std;

void print(int arr[5] , int n) {
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int arr[5] , int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
int main() {
  int arr[5] = {44,33,55,22,11};
  int n = 5;
  bubbleSort(arr , n);
  print(arr , n);
  return 0;
}
