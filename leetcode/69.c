#include <stdbool.h>
#include <stdio.h>

int mySqrt(int x) {
  bool solutionFound = false;

  int currentRoot = 2;

  while (!solutionFound) {
    if (currentRoot > 46341)
      currentRoot = 46341;
    int square = currentRoot * currentRoot;

    // printf("Root: %d | ", currentRoot);
    // printf("Square: %d | ", square);

    int correction = (x - square) / (currentRoot * 1.1);
    currentRoot += correction;
    // printf("Correction: %d | ", correction);

    // printf("\n");

    if (correction == 0) {
      if (square > x) {
        currentRoot -= 1;
      }
      solutionFound = true;
    }
  }

  return currentRoot;
}

int main() {
  printf("%d\n", mySqrt(8));
  printf("%d\n", mySqrt(2147395599));
  printf("%d\n", mySqrt(2147483647));
  return 0;
}
