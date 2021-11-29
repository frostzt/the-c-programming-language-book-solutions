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

#define MAX_LIMIT 5000
#define MAX_LINE_LENGTH 10

/*** prototypes ***/

int getLineLength(char line[]);
void printLine(char line[], int length);

/*** main ***/

int main() {
  char line[MAX_LIMIT];

  while (1) {
    int length = getLineLength(line);

    if (length == 0) {
      break;
    }

    printLine(line, length);
  }

  return 0;
}

/*** defs ***/

int getLineLength(char line[]) {
  int c = 0;
  int i;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
    if (i != 0 && i % MAX_LINE_LENGTH == 0) {
      line[i] = '\n';
    } else {
      line[i] = c;
    }
  }

  return i;
}

void printLine(char line[], int length) {
  for (int i = 0; i < length; i++) {
    putchar(line[i]);
  }
}