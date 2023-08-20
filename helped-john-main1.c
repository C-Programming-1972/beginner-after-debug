 /* HOW MANY BUGS -            1 (on line 12)
    WHAT'S THE PROBLEM -       Loops header should not end with a semicoln( It's not a syntax error, it's a logical error).
    HOW TO FIX -               Just remove the semicolon(;) at the end of for loop header
 */

#include <stdio.h>

// John's code
void printString(char string[], int n) {

    int i;
    for(i = 0; i < n; i++)    // Bug Fixed here...
    {
        printf(string);
    }
}


// John's brother's code
int main() {

    printString("Hi Everyone!\n", 3);
    printString("Get ready\n", 2);
}
