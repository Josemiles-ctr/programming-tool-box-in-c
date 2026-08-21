#include <stdio.h>
#define max(a, b) ((a > b) ? a : b)
int main() {
  int result = max(2, 3);
  printf("The greater number is %d", result);
}
