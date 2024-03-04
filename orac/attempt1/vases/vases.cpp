#include <cstdio>

int main() {
  FILE *inFile = fopen("vasesin.txt", "r");
  FILE *outFile = fopen("vasesout.txt", "w");

  int numFlowers;

  fscanf(inFile, "%d", &numFlowers);

  if (numFlowers < 6) {
    fprintf(outFile, "0 0 0");
    return 0;
  }

  int secondVase = 2;
  int thirdVase = 3;

  int firstVase = numFlowers - (secondVase + thirdVase);

  while (firstVase == secondVase || firstVase == thirdVase) {
    firstVase--;
    thirdVase++;

    if (firstVase < 0) {
        fprintf(outFile, "0 0 0");
        return 0;
    }
  }

  fprintf(outFile, "%d %d %d", firstVase, secondVase, thirdVase);

  return 0;
}