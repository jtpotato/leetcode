#include <cstdio>

int main() {
  FILE *inFile = fopen("telein.txt", "r");
  FILE *outFile = fopen("teleout.txt", "w");

  int instructionsLength;
  char instructions[100001];

  fscanf(inFile, "%d\n%s", &instructionsLength, instructions);

  int visitIndex = 0;
  int visitMin = 0;
  int visitMax = 0;

  for (int i = 0; i < instructionsLength; i++) {
    if (instructions[i] == 'L') {
      visitIndex--;
    } else if (instructions[i] == 'R') {
      visitIndex++;
    } else if (instructions[i] == 'T') {
      visitIndex = 0;
    }

    if (visitIndex > visitMax) {
      visitMax = visitIndex;
    } else if (visitIndex < visitMin) {
      visitMin = visitIndex;
    }
  }

  fprintf(outFile, "%d", (visitMax - visitMin) + 1);

  return 0;
}