#include <stdio.h>

/* count charactrs in input; */

int main()
{
    double nc; // double precision float to cope with big numbers

    for (nc = 0; getchar() != EOF; ++nc) // user input
        ;  // work is done in the test/increment parts. isolated semicolon = null statement to satisfy syntax
        printf("%.0f\n", nc);      //f for float or double
}
