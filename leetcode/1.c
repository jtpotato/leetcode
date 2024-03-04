/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  *returnSize = 2;

  for (int i = 0; i < numsSize; i++) {
    for (int j = 0; j < numsSize; j++) {
      if (j == i)
        j++;
      if (nums[i] + nums[j] == target) {
        int *result = malloc(2 * sizeof(int));
        result[0] = i;
        result[1] = j;
        return result;
      }
    }
  }

  return -1;
}
