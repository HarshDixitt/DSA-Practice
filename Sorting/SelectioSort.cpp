#include <iostream>
using namespace std;
void selectionSort(int arr[6] , int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i; // ith element hi smallest hai
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }

    // swap ith and minIndex elements;
    swap(arr[i], arr[minIndex]);
  }
}
void print(int arr[6],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {6,5,4,3,2,1};
    int n = 6;
    selectionSort(arr,n);
    print(arr,n);
    return 0;
}
