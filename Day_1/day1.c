// A Simple Circle program in C
#include <stdio.h>                      // Preprocessor Directive

double circularArea(double r);          // Fuction declaration (prototype form)

int main(){                             // Defintion of main() begins
    double radius = 1.0;
    double area  = 0.0;

    printf("         Area of Circles\n");
    printf("        Radius       Area\n");
    printf("-----------------------------------\n");

    area = circularArea(radius);
    printf("%10.1f      %10.2f\n", radius, area);

    radius = 5.0;
    area = circularArea(radius);
    printf("%10.1f      %10.2f\n", radius, area);

    return 0;


}

// The function circularArea() calculates the area of a circle
// Parameter:   The radius of the circle
// Return Value: The area of the circle

double circularArea(double r){          // Definition of CircularArea() begins
    const double pi = 3.1415926536;      // Pi is a constant
    
    return pi;
}