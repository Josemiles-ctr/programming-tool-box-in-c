#include <stdio.h>
int *rotate(int arr[], int n);
int main() {

  int arr[] = {
    5,
    67,
    7,
    23,
    6,
    72,
    4,
    67,
    8,
  };
  int n = sizeof(arr) / sizeof(arr[0]);
  int * result = rotate(arr, n);
  printf("Original array is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
    printf("Rotated array is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", result[i]);
  }
}
int *rotate(int arr[], int n) {
 static int temp[100];
 for (int i = 1; i < n; i++) {
   temp[i] = arr[n-i-1];
  }
  temp[0] = arr[n-1];
  arr = temp;
  return arr;
}
