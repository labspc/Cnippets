/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ 输出：                                                                                                             │
  │ Offset of member 'a' is 0 bytes                                                                                 │
  │ Offset of member 'b' is 4 bytes                                                                                 │
  │ Offset of member 'c' is 8 bytes                                                                                 │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
#include <stdio.h>
#include <stddef.h>

struct Example {
    int a; //4，0
    char b; //1，4
    float c; //4，8
};
/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ %zu 是C语言中用于格式化输出的格式说明符之一。                                                                                       │
  │ 它用于打印 size_t 类型的值，size_t 是无符号整数类型，通常用于表示内存大小或对象大小。                                                              │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
int main() {
    size_t offset;

    offset = offsetof(struct Example, a);
    printf("Offset of member 'a' is %zu bytes\n", offset);

    offset = offsetof(struct Example, b);
    printf("Offset of member 'b' is %zu bytes\n", offset);

    offset = offsetof(struct Example, c);
    printf("Offset of member 'c' is %zu bytes\n", offset);

    return 0;
}
