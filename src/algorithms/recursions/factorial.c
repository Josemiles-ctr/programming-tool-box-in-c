int factorial(int n){
  if (n < 0) {
    return -1; // Factorial is not defined for negative numbers
  }
  else if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
