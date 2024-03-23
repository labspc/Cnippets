#include <stdio.h>

int main() {
    int num = 42;

    if (num < 0) {
        printf("Number is negative.\n");
    } else if (num == 0) {
        printf("Number is zero.\n");
    } else {
        printf("Number is positive.\n");
    }

    return 0;
}