/*
    HOW MANY BUGS -            1 (on line 19)
    WHAT'S THE PROBLEM -       Integer division truncates in C. (so 5/9 becomes 0)
    HOW TO FIX -               Represent the (5/9) as (5.0/9.0) so that it becomes floating point division and to get actual value of 5 divided by 9.

    WHAT MIGHT WORK AS WELL-    1. Representing either 5 or 9 as a float values like (5/9.0) or (5.0/9)
                                2. The following expressin works fine because fahrenheit[i] is a float(double precision)
                                    celsius[i] = 5*(fahrenheit[i] - 32) / 9   
    EXPLORE MORE -              1. Integer division in C
                                2. Floating point division in C
            
*/



#include <stdio.h>

// Sophia's Code
void temperatureConverter(double fahrenheit[], double celsius[], int n) {

    for(int i = 0; i < n; i++) {
        celsius[i] = (5.0/9.0) * (fahrenheit[i] - 32);                      // BUG fixed here...
    }
}


// Instructor's code
int main() {

    // Variable delcarations
    double fahreheit[5] = {100.0, 120.0, 88.5, 68.4, 98.7};
    double celsius[5];
    int n = 5;

    // Call Sophia's function
    temperatureConverter(fahreheit, celsius, n);

    // Print temperatures
    for(int i = 0; i < n; i++) {
        printf("%lf F = %lf C\n", fahreheit[i], celsius[i]);
    }

    return 0;
}
