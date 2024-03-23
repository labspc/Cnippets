#include <stdio.h>

int i;
int *p = &i;
int main()
{
    i = 10;
    printf("%d\n", i);
    printf("\n");
    printf("%d\n", *p);
    printf("\n");
    *p = 20;
    printf("%d\n", i);
    printf("\n");
    printf("%d\n", *p);
    return 0;
}