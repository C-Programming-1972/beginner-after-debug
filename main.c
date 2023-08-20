/*
 *  This file contains one or more intentional bugs to be solved
 */

#include <stdio.h>

// John's code
void printString(char string[], int n) {

    int i;
    for(i = 0; i < n; i++);
    {
        printf(string);
    }
}


// John's brother's code
int main() {

    printString("Hi Everyone!\n", 3);
    printString("Get ready\n", 2);
}
