#include <stdio.h>

int bitcount(unsigned int x)
{
    int count = 0;
    for (count = 0; x != 0; x >>= 1)
    {
        if (x & 01)
        {
            count++;
        }
    }

    // while (x) {

    //     count += x & 1;

    //     x >>= 1;
    // }

    return count;
}

int main()
{
    unsigned int num = 13; // Example input

    // Call the bitcount function and print the result
    printf("Number of set bits in %u: %d\n", num, bitcount(num));

    return 0;
}
