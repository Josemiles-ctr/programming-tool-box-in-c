#include <stdio.h>
int * productExcept(int arr[], int n, int out);
int main(){
  int arr[]={
    2,
    4,
    6,
    10,
  };
  int n = sizeof(arr)/sizeof(arr[0]);
  int out=1;
  int *result = productExcept(arr, n, out);

  printf("The product of numbers in array [");
  for(int i=0; i<n-1;i++){
    printf("%d ", i);
  }
  printf("] without %d in index %d is %d ", arr[out], out, *result);
}
int *productExcept(int arr[], int n, int out){
  static int result=1;
  for (int i=0; i<n; i++){
    if(i!=out){
      result=result*arr[i];
    }
  }
  return &result;
}
