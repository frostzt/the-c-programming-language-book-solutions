/**
 * Exercise 1-22
 *
 * Write a program to "fold" long input lines into two or more
 * shorter lines after the last non-blank character that occurs before the n-th
 * column of input. Make sure your program does something intelligent with very
 * long lines, and if there are no blanks or tabs before the specified column.
 **/

#include <stdio.h>

#define MAX_LINE_LENGTH 250

int getLine(char line[], int len);

int main() {
  int length = 0;
  char line[MAX_LINE_LENGTH];

  while ((getLine(line, length) != EOF)) {
  }

  return 0;
}

int getLine(char line[], int len) {
  int c = 0;

  while ((c = getchar()) != EOF && c != '\n') {
    putchar(c);
  }

  return c;
}
