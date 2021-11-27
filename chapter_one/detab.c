#include <stdio.h>

#define TAB_LENGTH 4;

void uptoNextString(int c);

int main() {
  int c = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      uptoNextString(c);
    } else {
      putchar(c);
    }
  }

  return 0;
}

void uptoNextString(int c) {
  int length = TAB_LENGTH;

  for (size_t i = 0; i < length; i++) {
    printf(" ");
  }
}
