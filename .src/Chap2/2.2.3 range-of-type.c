#include <stdio.h>

int main()
{
    printf("%lu\n", sizeof(char));  // 1
    printf("%lu\n", sizeof(short)); // 2
    printf("%lu\n", sizeof(int));   //
    printf("%lu\n", sizeof(long));
    printf("%lu\n", sizeof(long long));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));

    return 0;
}