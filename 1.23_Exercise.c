// write a program to remove all comments from a C program. 

// #include <stdio.h>
// #include <string.h>
// int main()
// {   // code = example input for program
//     char* code = "#include <stdio.h> \n\
// int main() { \n\
// printf('hello world); // This is a test \n\
// }";
    
//     // printf("%s", code);
    
//     int c, i, prev,status;
//     prev = '0';
//     status = 0;
//     for (i = 0; i < strlen(code); ++i) {
//         c = code[i];
//         if (c == '/' && prev == '/') {
//             status = 1; // when status is 1, currently parsing through comment
//         }
//         else if (status == 1 && c!= '\n') {
//             ;  
//         }
//         else if (status == 1 && c == '\n') {
//             status = 0;
//         }
//         else {
//             prev = c;
//             putchar(c);
//         }
//     }
// }

/*
#include <stdio.h>
#include <string.h>
int main()
{   // code = example input for program
    char code[100] = "#include <stdio.h> \n\
int main() { \n\
printf('hello world); // This is a test \n\
}";
   
    int c, i, prev,status;
    prev = '0';
    status = 0;
    for (i = 0; i < strlen(code); ++i) {
        c = code[i];
        if (c == '/' && prev == '/') {
            code[i] = ' '; //when i did only i, or i-1 it still kept one '/' for some reason???
            code[i-1] = ' ';
            status = 1; // when status is 1, currently parsing through comment
        }
        else if (status == 1 && c!= '\n') {
            code[i] = ' ';  
        }
        else if (status == 1 && c == '\n') {
            status = 0;
        }
        else {
            prev = c;
            code[i] = c;
        }
    }
    printf("%s", code);
}
*/

#include <stdio.h>

int main() {
    // code = example input for program
    char code[100] = "#include <stdio.h> \n\
    int main() { \n\
    printf('hello world); // This is a test \n\
    }";
    int i, current, next, status;
    next = '0'; // keep track of next char
    status = 0; // keeps track of whether or not the index is within a comment. 
    for (i = 0; code[i] != '\0'; i++) { // loop through list until EOF
        current = code[i]; 
        next = code[i+1];

        if (next == '/' && current == '/') { // begining of comment
            status = 1;
            
        }
        else if(status == 1 && current == '\n') { // new line considered end of comment for this program
            status = 0;
           
        }
        else if (status != 1) {
            putchar(current);
           
        }
    }
}
