#include <stdio.h>
// This is a two sum problem implementation in C. It finds two indices of
// numbers in an array that add up to a target value.

int *twoSum(int nums[], int length, int target);

int main(void) {
  int nums[] = {2, 7, 11, 15};
  int target = 9;
  int *result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target);

  if (result != NULL) {
    printf("Indices: %d, %d\n", result[0], result[1]);
  } else {
    printf("No solution found.\n");
  }

  return 0;
}

int *twoSum(int nums[], int length, int target) {
  static int seen[1000] = {0};
  static int result[2];

  for (int i = 0; i < length; i++) {
    int complement = target - nums[i];

    if (seen[complement] != 0) {
      result[0] = seen[complement] - 1;
      result[1] = i;
      return result;
    }

    seen[nums[i]] = i + 1;
  }

  return NULL;
}
