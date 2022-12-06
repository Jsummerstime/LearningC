// Write an alternate version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2.

//squeeze: delete all c from s
/*
void squeeze(char s[], int c) 
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c) 
            s[j++] = s[i];
    s[j] = '\0';
}
*/

#include <stdio.h>    // This version is naive because j is not used. instead, I should have incremented only i and not j when
void squeeze_two(char s1[], char s2[]); // when s1[i] == s2[i]. This would look like : s[j++] = s[i]. see page 59 of C textbook.

int main() {
    char sen1[] = "1234 5678";
    char sen2[] = "1bcd e6gh";
    squeeze_two(sen1,sen2);
    
    printf("%s", sen1);
}

void squeeze_two(char s1[], char s2[]) 
{
    int i, j;

    for (i = j = 0; s1[i] != '\0'; ++i) 
    {
     
        if (s1[i] != s2[i]) 
        {
            s1[i] = s1[i];
            
        }
        else 
        {
            s1[i] = ' ';
        }
       
    }
}
