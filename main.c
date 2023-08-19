#include <stdio.h>

// Sophia's Code
void temperatureConverter(double fahrenheit[], double celsius[], int n) {

    for(int i = 0; i < n; i++) {
        celsius[i] = (5.0/9.0) * (fahrenheit[i] - 32);
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