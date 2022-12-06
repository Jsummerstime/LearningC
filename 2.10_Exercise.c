// rewrite the function lower, which converts upper case letters to lowercase, 
// with a conditional expression instead of if-else
#include <stdio.h>
int lower(char c);
char test[] = "AbCd";
int i;
int main()
{
    for(i= 0; i<=4; i++) 
    {
        printf("%c", lower(test[i]));
    }
}
int new;
int lower(char c) 
{
    new = (c >97) ? c: c+32; // if c is greated than 97 (already lowercase), then new = c. else, add 32 (make lowercase)
    return new;
}