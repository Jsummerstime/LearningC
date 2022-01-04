// #include <stdio.h> 

// /* print Fahrenheit-Celsius table
//     for fahr = 0, 20, ..., 300 */

// int main() // added "int" in response to: "warning: return type defaults to 'int' [-Wimplicit-int]"
// {
//     float fahr, celsius;   // var must be declared before used
//     int lower, upper, step;

//     lower = 0; // lower limit of temperature table
//     upper = 300; // upper limit of temperature table
//     step = 20; // step size

//     fahr = lower;
//     while (fahr <= upper) {
//         celsius = (5.0/9.0) * (fahr-32.0);
//         // printf("%d\t%d\n", fahr, celsius); // print with tab
//         printf("%3.0f %6.1f\n", fahr, celsius); //print with augmented width to reformat. 
//         // %3.0 = three characters wide, no decimal. %6.1 = six wide, one decimal place
//         fahr = fahr + step;
//     }
// }

#include <stdio.h>  // verison two, print in reverse order

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int main() // added "int" in response to: "warning: return type defaults to 'int' [-Wimplicit-int]"
{
    float fahr, celsius;   // var must be declared before used
    int lower, upper, step;

    lower = 0; // lower limit of temperature table
    upper = 300; // upper limit of temperature table
    step = 20; // step size

    fahr = upper;
    while (fahr >= lower) {
        celsius = (5.0/9.0) * (fahr-32.0);
        // printf("%d\t%d\n", fahr, celsius); // print with tab
        printf("%3.0f %6.1f\n", fahr, celsius); //print with augmented width to reformat. 
        // %3.0 = three characters wide, no decimal. %6.1 = six wide, one decimal place
        fahr = fahr - step;
    }
}

