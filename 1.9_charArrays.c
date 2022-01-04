// #include <stdio.h>
// #define MAXLINE 1000 // max input size

// // define functions

// int ogetline(char line[], int maxline); //getline is already in c library? so i added an 'o'
// void copy(char to[], char from[]);

// // print longest input line

// int main()       // this version works
// {
//     int len; // current line length
//     int max; // max length seen so far
//     char line[MAXLINE]; //current input line
//     char longest[MAXLINE]; // longest line saved here

//     max = 0;
//     while ((len = ogetline(line, MAXLINE)) > 0) {
//         if (len > max) {
//             max = len;
//             copy(longest, line);
//         }
//     }
//     if (max > 0) {// there was a line
//         printf("%s", longest);
//     }
//     return 0;
// }

// // ogetline: read a line into s, return length
// int ogetline(char s[], int lim)
// {
//     int c, i;

//     for (i=0; i < lim-1 && (c = getchar()) != EOF && c!= '\n'; ++i)  // counts characters
//         s[i] = c;
//     if (c == '\n') {                                                 
//         s[i] = c;
//         ++i;
//     }
//     s[i] = '\0';
//     return i;   
// }

// // copy 'from' into 'to'; assume to is big enough
// void copy(char to[], char from[])
// {
//     int i;
//     i = 0;
//     while ((to[i] = from[i]) != '\0')
//         ++i;
// }



// #include <stdio.h>                        // I wanted to make this more straight forward see line 93.
// #define MAXLINE 1000                      // max input size

// // define functions

// int ogetline(char line[], int maxline); //getline is already in c library? so i added an 'o'
// void copy(char to[], char from[]);

// // print longest input line

// int main()
// {
//     int len; // current line length
//     int max; // max length seen so far
//     char line[MAXLINE]; //current input line
//     char longest[MAXLINE]; // longest line saved here

//     max = 0;
//     while ((len = ogetline(line, MAXLINE)) > 0) {
//         if (len > max) {
//             max = len;
//             copy(longest, line);
//         }
//     }
//     if (max > 0) {// there was a line
//         printf("%s", longest);
//     }
//     return 0;
// }

// // ogetline: read a line into s, return length
// int ogetline(char s[], int lim)
// {
//     int c, i;

//     for (i=0; i < lim-1 && (c = getchar()) != EOF && c!= '\n'; ++i)  {// counts characters
//         s[i] = c;
//     }
//     //if (c == '\n') {       // i felt like this extra step was unncessecary.
//     //    s[i] = c;
//     //    ++i;
//     //}
//     s[i] = '\0';             // at the end of a line, replace EOF with 0
//     return i;   
// }

// // copy 'from' into 'to'; assume to is big enough
// void copy(char to[], char from[])
// {
//     int i;
//     i = 0;
//     while ((to[i] = from[i]) != '\0')
//         ++i;
// }



// write a function reverse(s) that reverses the character string s. 

#include <stdio.h>
#include <string.h>       //import for strlen function

char *reverse(char s[10]);  // * needed to return entire string, instead of a single char.
int main()
{
    char test[10] = "Test";
    reverse(test);
}

char *reverse(char s[10]) {
    char new[10];
    int i;
    int len = strlen(s) -1;
    for (i=0; i <= len && i < 10; ++i) {
        new[len - i] = s[i];
    }
    new[i] = '\0';         // end of string
    printf("%s", new);
    return 0;
}