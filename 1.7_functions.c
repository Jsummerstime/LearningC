// rewrite the temperature conversion program of section 1.2 to use a function for conversion.

#include <stdio.h>
float tempConv(float fahr); // declare function before coding it

int main()   // main is a type of funciton, test our new function in main.

{
    int i;
    for (i=0; i <=300; i+=20) {
    printf("%0.1f \n", tempConv(i));          //make sure to use f for float while calling our function!
    } 
}

float tempConv(float fahr) { // return-type function-name(parameter declarations) 
    float celsius;   // var must be declared before used

    celsius = (5.0/9.0) * (fahr-32.0); // statments
    
    return celsius; 
}