// Write a program to 'fold' long input lines into two or more shorter lines after the last non-blank character that occurs 
// before the n-th column of input. Make sure your program does somehting intellient with very long lines, and if there are no blanks or 
// tabs before the specified column

#include <stdio.h>
/*
int main()
{
    int c, n, pos;
    n = 8;   // adjust to set to desired line length
    pos = 0;
    while ((c=getchar()) != EOF) {
        if (pos % n == 0) {      // if line length met, go to next line
            ++pos;
            putchar('\n');
            putchar(c);
        }
        else {
            ++pos;
            putchar(c);
        }
    }
}
*/

// Write a program to 'fold' long input lines into two or more shorter lines after the last non-blank character that occurs 
// before the n-th column of input. Make sure your program does somehting intellient with very long lines, and if there are no blanks or 
// tabs before the specified column




int main() {
    int c, count,n;
    count = 0;
    n = 8; //nth column 
    while((c = getchar()) != EOF) {
        
       if (count %n ==0) {
        
        putchar('\n');
        putchar(c);
        ++count;
       }
       else {
        putchar(c);
        ++count;
       }
    }
}




















