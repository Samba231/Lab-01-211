// PID: 730718704
// I pledge the COMP 211 honor code.


#include <stdio.h>
#include <stdbool.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            // Convert uppercase letters to lowercase
            c = c + ('a' - 'A');
        }
        putchar(c);
    }

    return 0;
}
