#include <stdio.h>

void print_alphabet(void);

int main() {
    print_alphabet();
    return 0;
}

void print_alphabet(void) {
    char j;
    for (j = 'a'; j <= 'z'; j++) {
        putchar(j);
    }
    putchar('\n'); /* Add a newline at the end of the alphabet */
}
