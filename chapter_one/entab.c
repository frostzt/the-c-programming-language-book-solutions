#include <stdio.h>

#define TAB_LENGTH 4

int main() {
  int c = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
    } else {
      putchar(c);
    }
  }

  return 0;
}

/*

this is  great




*/