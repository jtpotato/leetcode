#include <cstdio>

int main() {
  FILE* inputFile;
  inputFile = fopen("ninjain.txt", "r");
  int n, k;

  fscanf(inputFile, "%d %d", &n, &k);

  int i = 0;
  int escaped = 0;


  while (i < n) {
    if (i + k < n) {
      escaped += k;
    } else {
      escaped += n - i - 1;
    }

    printf("%d, %d, %d\n", i, k, escaped);

    i += k + 1;
  }

  FILE *outputFile = fopen("ninjaout.txt", "w");
  fprintf(outputFile, "%d", escaped);

  return 0;
}