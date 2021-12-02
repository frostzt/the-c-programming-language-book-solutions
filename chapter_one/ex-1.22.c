/**
 * Exercise 1-22
 *
 * Write a program to "fold" long input lines into two or more
 * shorter lines after the last non-blank character that occurs before the n-th
 * column of input. Make sure your program does something intelligent with very
 * long lines, and if there are no blanks or tabs before the specified column.
 **/

/**
 * Idea: In the main function get the characters from the stdin stream, and
 * store them into a global variable that will hold the entire line. This line
 * should be calculated to match the MAX_LINE_LENGTH and printed in order so
 * that a cursor should remain at the lat position.
 **/

#include <stdio.h>

/*** defines ***/

typedef int bool;
#define true 1
#define false 0

#define MAX_LIMIT 5000
#define MAX_LINE_LENGTH 50

/*** globals ***/

char line[MAX_LIMIT];

/*** prototypes ***/

int newposition(int pos);
int blankPosition(int pos);
void printLineTillNow(int uptoIndex);

/*** main ***/

int main() {
  int c, counter;

  counter = 0;
  while ((c = getchar()) != EOF) {
    line[counter] = c;

    if (c == '\n') {
      printLineTillNow(counter);
      counter = 0;
    } else if (++counter >= MAX_LINE_LENGTH) {
      counter = blankPosition(counter);
      printLineTillNow(counter);
      counter = newposition(counter);
    }
  }

  return 0;
}

/*** defs ***/
int blankPosition(int pos) {
  if (pos <= 0) {
    return MAX_LINE_LENGTH;
  }
  if (pos > 0) {
    while (line[pos] != ' ') {
      --pos;
    }
  }

  return pos + 1;
}

void printLineTillNow(int uptoIndex) {
  for (int i = 0; i < uptoIndex; i++) {
    putchar(line[i]);
  }
  putchar('\n');
}

int newposition(int pos) {
  int i, j;

  if (pos <= 0 || pos >= MAX_LINE_LENGTH) {
    return 0;
  } else {
    i = 0;
    for (j = pos; j < MAX_LINE_LENGTH; ++j, ++i) {
      line[i] = line[j];
    }
  }

  return i;
}
