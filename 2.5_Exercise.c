// Write the functin any(s1, s2), which returns the first location in the string s1 where any character from the string s2 occurs, or a -1 is s1 contains no
// characters from s2. 

#include <stdio.h>


int any(char s1[], char s2[]);

int main()
{
    char sen1[] = "A123B4"; // at index 4, the first occurance of a matching character is 'B'.
    char sen2[] = "xxxBxx";
    printf("%d", any(sen1,sen2));
}

int any(char s1[], char s2[]) 
{
    int i, j;
    for (i=0; s1[i] != '\0'; ++i) // loop through first string
    {
        for (j=0; s2[j] != '\0'; ++j) { // for each char in s1, compare to each char in s2
            if (s1[i] == s2[j]) 
            {
                return i; // if match found, return index
            }
        }
    }
    return -1; // else return -1
}


