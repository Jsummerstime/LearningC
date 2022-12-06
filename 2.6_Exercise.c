// Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchange.
#include <stdio.h>

unsigned setbits(x,p,n, y)
{
    return (x >> (p+1-n)) & ~(~0 << n);
    
}


int main()
{
    printf("%d", setbits(7,4,3));
}
