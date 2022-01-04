// write a program detab that replaces tabs in the input with the proper number of blaks to spaces to the next tab stop. Assume a fixed set of tab
// stops, say every n columns (TS). 

/*
Explaination: https://stackoverflow.com/questions/26692522/kr-exercise-1-20-the-programming-language-2nd-edition

Think of the terminal/console as lines and columns. Suppose you have 80 columns (0-79) with special positions called "tab stops" every 8 columns 
(0,8,16,24,32,40,48,56,64,72). If you encounter a \t, it should move to the next tab stop. You're basically trying to duplicate the same effect 
by outputting the number of spaces necessary to move to the next tab stop.
*/


#include <stdio.h>

#define TS 5  // symbolic parameter becase TS should not change

int pos, c; // pos to keep track of 'index', c for input

int main() {
while ((c = getchar()) != EOF) { // while user provides input
    if (c == '\t') {
        while (pos % TS != 0) {  // print 'spaces' until next tab stop is reached
            putchar('#');
            ++pos;               // adjust 'index'
        }
    }
    else if (c == '\n') {        // reset
        putchar(c);
        pos = 0;
    }
    else {
        putchar(c);
        ++pos;
    }
}

}