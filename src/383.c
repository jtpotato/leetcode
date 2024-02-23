#include <stdbool.h>
#include <stdio.h>

bool canConstruct(char *ransomNote, char *magazine) {
  int map[26] = {0};

  while (*magazine) {
    map[*magazine - 'a']++;
    magazine++;
  }
  while (*ransomNote) {
    map[*ransomNote - 'a']--;
    ransomNote++;
  }

  for (int i = 0; i < 26; i++) {
    if (map[i] < 0) {
      return false;
    }
  }

  return true;
}

int main(void) {
  char *ransomNote = "a";
  char *magazine = "a";

  bool constructable = canConstruct(ransomNote, magazine);

  printf("%d\n", constructable);

  return 0;
}
