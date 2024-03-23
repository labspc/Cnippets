#include <stdio.h>

// struct bits // total: 9 bits
// {
//     // unsigned a : 1;
//     // unsigned b : 3;
//     // unsigned c : 5;
//     int a : 1;
//     int b : 3;
//     int c : 29;
// };
struct bits
{
    unsigned a : 4;
    unsigned : 0;
    unsigned b : 4;
};
int main()
{
    printf("Sizeof bits_var is: %lu", sizeof(struct bits));
}

/*
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ 输出：Sizeof bits_var is: 8                                                                                        │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
