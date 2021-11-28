/**
 * Exercise 1-22
 *
 * Write a program to "fold" long input lines into two or more
 * shorter lines after the last non-blank character that occurs before the n-th
 * column of input. Make sure your program does something intelligent with very
 * long lines, and if there are no blanks or tabs before the specified column.
 **/

#include <stdio.h>

/*** defines ***/

#define MAX_LINE_LENGTH 250

/*** prototypes ***/

int getLineLength(char line[]);

/*** main ***/

int main() {
  char line[MAX_LINE_LENGTH];

  while (1) {
    int length = getLineLength(line);

    for (int i = 0; i < length; i++) {
      putchar(line[i]);
    }
    printf("%d\n", length);
  }

  return 0;
}

/*** defs ***/

int getLineLength(char line[]) {
  int c = 0;
  int i;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }

  return i;
}
