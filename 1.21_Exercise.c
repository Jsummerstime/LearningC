// write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. 
// Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?

#include <stdio.h>

int main()
{
    int currentLen;
    currentLen = 9;  // change to simulate different space increments. 9 = one tab, one space.

    while (currentLen != 0) {
        if (currentLen - 8 >= 0) { // if the string of spaces is long enough, replace spaces with tab.
            printf("\\t");
            currentLen -=8;
        }
        else {
            
            while (currentLen != 0) {  // replace remaining spaces with spaces.
                printf("#");
                currentLen -= 1;
            }
        }
    }
}