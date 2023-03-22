#include <stdio.h>
#include "main.h"

void print_alphabet(void) {
    char j;
    for (j = 'a'; j <= 'z'; j++) {
        putchar(j);
    }
    putchar('\n'); // Add a newline at the end of the alphabet
}

int main() {
    print_alphabet();
    return 0;
}
