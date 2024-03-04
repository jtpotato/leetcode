#include <cstdio>

int main() {
  FILE* inFile = fopen("bankin.txt", "r");
  FILE* outFile = fopen("bankout.txt", "w");

  int numDays = 2;
  fscanf(inFile, "%d", &numDays);

  char days[100001];
  fscanf(inFile, "%s", days);

  int skill = 1;
  int money = 0;

  for (int i = 0; i < numDays; i++) {
    if (days[i] == 'M') {
      // must paint.
      money += skill;
      continue;
    }
    if (days[i] == 'C') {
      if (skill >= numDays - i) {
        money += skill;
      } else {
        skill++;
      }
    }
  }

  fprintf(outFile, "%d", money);

  return 0;
}