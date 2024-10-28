#include <stdio.h>

// Print Fahrenheit-Celsious table for fahr = 0, 20, ....

// One way of writing this code

// int main(){
//         int fahr, celsius;
//         int lower, upper, step;

//         lower = 0;      // lower limit of temperature scale
//         upper = 200;    // upper limit of temperature scale
//         step = 20;      // step size of temperature scale

//         fahr = lower;
//         while(fahr <= upper){
//             celsius = 5 * (fahr-32) / 9;
//             printf("%d\t%d\n", fahr, celsius);
//             fahr = fahr + step;
//         }
//     }

// Another way of writing the code

// Printing Fahrenheit-Celsius Table for fahr = 0, 20, ......, 300; floating-point version
int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      // Lower Limit of temperature scale
    upper = 300;     // Upper Limit of temperature scale
    step = 20;      // Step size

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.lf\n", fahr, celsius);
        fahr = fahr + step;
    }
}




