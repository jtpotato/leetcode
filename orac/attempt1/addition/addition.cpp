#include <cstdio>

int main() {
  FILE *inputFile;
  inputFile = fopen("addin.txt", "r");

  int a, b, total;

  fscanf(inputFile, "%d %d", &a, &b);
  fclose(inputFile);

  total = a + b;

  FILE *outputFile;
  outputFile = fopen("addout.txt", "w");
  fprintf(outputFile, "%d", total);
  fclose(outputFile);

  return 0;
}
