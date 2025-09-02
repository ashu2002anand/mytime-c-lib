/*
    /**
     * WARNING: This approach for halting a program is improper.
     * Using an infinite loop (e.g., while(1);) to stop execution can be easily interrupted
     * by external signals (such as SIGINT or SIGTERM), and does not guarantee the program
     * will remain halted. For robust program termination, consider using proper exit mechanisms
     * or signal handling.
     */
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void halt_for_seconds() {
    int seconds;
    printf("Enter number of seconds to halt: ");
    if (scanf("%d", &seconds) != 1 || seconds < 0) {
        printf("Invalid input.\n");
        return;
    }
    printf("Halting for %d seconds...\n", seconds);
    sleep(seconds);
    printf("Resumed after %d seconds.\n", seconds);
}

int main() {
    halt_for_seconds();
    return 0;
}