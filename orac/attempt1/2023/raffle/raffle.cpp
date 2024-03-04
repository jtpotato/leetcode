#include <cstdio>

int main() {
  FILE *inFile = fopen("rafflein.txt", "r");
  FILE *outFile = fopen("raffleout.txt", "w");

  int numCompetitors;
  int maxNumber;

  fscanf(inFile, "%d %d\n", &numCompetitors, &maxNumber);

  int entryLog[100001] = { 0 };

  for (int i = 0; i < numCompetitors; i++) {
    int currentNum;
    fscanf(inFile, "%d", &currentNum);
    entryLog[currentNum]++;
  }

  for (int i = 1; i <= maxNumber; i++) {
    printf("%d: %d\n", i, entryLog[i]);
    if (entryLog[i] == 1) {
      // printf("WINNER!");
      fprintf(outFile, "%d", i);
      return 0;
    }
  }

  fprintf(outFile, "-1");
  return 0;
}