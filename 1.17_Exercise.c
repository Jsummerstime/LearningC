// Write a program to print all input lines that are longer than 8 chars

#include <stdio.h>
#define max 1000  // define size of array

int main() {

    int count = 0; 
    int c;
    char last[max];

    while((c=getchar()) !=EOF) {
        last[count] = c; // keep track of input
        ++count;
        
    }
    int i;
    // printf("%d", count);
    if (count >= 8) {
      
        printf("%s", last); // https://www.delftstack.com/howto/c/print-char-array-in-c/ print an array 
        
    }
    else {
        printf("Nope");
    }
}

