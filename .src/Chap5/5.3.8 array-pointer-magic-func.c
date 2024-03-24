/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ OUTPUT:
  │ a[0]: 7                                                                                                         │
  │ a[1]: 12                                                                                                        │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
#include <stdio.h>

int main()
{
    int a[10];
    *a = 7; // a[0] = 7;
    *(a + 1) = 12; // a[1] = 12;

    printf("a[0]: %d\n", *a);
    printf("a[1]: %d\n", *(a + 1));

    return 0;
}