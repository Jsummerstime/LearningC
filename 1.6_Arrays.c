#include <stdio.h>

// write a program to print a histogram o the lengths of words in its input.
// Use an array to store values, input max = 10 words.

int main()
{
    int c, len, i, item;
    len = 0;
    i = 0;
    item = 0;
    int words[10];
    
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n'){
            ++len;
        }
        else {
            words[i]=len;
            for (item=0; item < words[i]; ++item) {
                putchar('#');
            }
            putchar('\n');
            len = 0;
            ++i;   
        }
    }

}

// #include <stdio.h>   

// int main()
// {
//     int i;
//     int arr[10];

//     for (i=0; i < 10; ++i) {  // this basic for loop works
//         arr[i] = i;
//         printf(" %d", arr[i]);
    
//     }
// }