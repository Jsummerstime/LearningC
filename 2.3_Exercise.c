// Write the function htoi(s), which coverts a string of hexadecimal 
// digits(including an optional 0x or 0X) into its equivalent int value.
// The allowable digits are 0 - 9, a -f, and A - F.


/*  https://byjus.com/maths/hex-to-decimal/
7CF = (7 × 16^2) + (12 × 16^1) + (15 × 16^0)

= (7 × 256) + (12 × 16) + (15 × 1)

= 1792 + 192 + 15

= 1999
ACII:
decimal 48 == 0
decimal 57 == 9
decimal 65 == A
decimal 90 == Z
decimal 97 == a
decimal 122 == z
*/


#include <stdio.h> 
#include <string.h>       //import for strlen function

int htoi(char hex[]); // convert hex to dec
int power(int n, int e); // custom power funciton: n^e == total

int main() {
    char test[] = "7cf"; // test case
  
    printf("%d", htoi(test));
    
}

int htoi(char hex[]) {
   
    int i; // used to index hex
    int total = 0; // keep track of running total, see line 109 for formula
    int len = strlen(hex)-1; // needed to keep track of exponent in power function attribute. 
    
    
    for (i=0; hex[i] != '\0'; ++i) { //hex to decimal formula: 7CF = (7 × 16^2) + (12 × 16^1) + (15 × 16^0)
      
        
        if (hex[i] >= 97 && hex[i] <=122){  // a(97) through z(122)
            total+= ((hex[i]-87) * (power(16, (len-i)))); // hex[i] a == 10, b== 11, etc
          
        }
        else if (hex[i] >= 65 && hex[i] <=90) { // A (65) through Z(90)
            total += ((hex[i] - 55) * (power(16, (len-i))));
    
        }
        else if (hex[i] >= 48 && hex[i] <= 57) { // 0(48) through 9(57)
            total += ((hex[i] -48) * (power(16, (len-i))));
            
        } 
        
    }

    return total;
    
}

int power(int n, int e) {
    int total = n;
    int i;
    if (e!=0) {
    for (i =0; i < e-1; ++i) {
        total = total * n;
    }
    }
    else {  // n^0 ==1
        total = 1;
    }

    return total;
}
