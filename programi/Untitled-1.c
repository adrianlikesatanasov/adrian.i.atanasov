#include <stdio.h>
#define INT_MIN_char SCHAR_MIN
#define INT_MAX_char SCHAR_MAX

int main() {
    printf("%-10s | %-10s | %-5s | %-20s | %-20s | %-10s | %-20s\n",  "Type", "Signed", "Bytes", "Signed Min", "Signed Max", "Unsigned", "Unsigned Max");
    printf("---------------------------------------------------------------------------------\n");

    return 0 ; }
