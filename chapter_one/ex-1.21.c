/**
 * Exercise 1-21
 *
 * Write a program entab that replaces strings of blanks by the
 * minimum number of tabs and blanks to achieve the same spacing. Use the
 * same tab stops as for detab. When either a tab or a single blank would
 * suffice to reach a tab stop, which should be given preference?
 */

#include <stdio.h>

#define TAB_LENGTH 4

int main() {
  int c = 0;
  int spaces = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      spaces++;
    } else {
      int tabs = spaces / TAB_LENGTH;
      int remSpaces = spaces - (tabs * TAB_LENGTH);

      // Put tabs
      for (int i = 0; i < tabs; i++) {
        putchar('\t');
      }

      // Put remaining spaces
      for (int i = 0; i < remSpaces; i++) {
        putchar(' ');
      }

      // Reset spaces count
      if (c != ' ') {
        spaces = 0;
      }

      putchar(c);
    }
  }

  return 0;
}
