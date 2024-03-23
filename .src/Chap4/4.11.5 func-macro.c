#include <stdio.h>

// 带有参数的宏定义
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {
    int a = 5;
    int b = 10;
    
    // 调用带有参数的宏
    int max_value = MAX(a, b);
    
    printf("较大的数是：%d\n", max_value);

    return 0;
}
