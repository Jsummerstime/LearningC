#include <stdio.h>
/*
// count lines in input

int main ()

{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')  // counting new line character
            ++nl;
    printf("%d\n", nl);
}
*/

// program to count blanks, tabs, and new lines

/*
int main()
{
    int c, bl, tb, nl;
    bl = 0;
    tb = 0;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            nl++;
        else if (c == '\t')
            tb++;
        else if (c == ' ')
            bl++;
        
    printf("Blanks: %d, Tabs: %d, New Lines: %d",bl,tb,nl);
}
*/

// program to copy its input to its output, replacing each string of one or more blanks to a single blank

// int main()
// {
//     int c;
//     int prev;
//     while ((c = getchar()) != EOF)
        
//         if (c == '\t') {
//             putchar(' ');
//             prev = ' ';
//         }
//         else if (c == ' ' && prev == ' ') {
//            continue;
//         }
//         else {
//             putchar(c);
//             prev = c;
//         }     
// }

// Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\.

int main()
{
    char c;
    while ((c = getchar()) != EOF)
        if (c == '\n') {
            putchar('\\');
            putchar('n');
        }
        else if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b') {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else {
            putchar(c);
        }
}
