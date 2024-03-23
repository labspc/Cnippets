#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main() {
    double radius = 2.0;
    double area;

    // 宏调用
    area = PI * SQUARE(radius);
    
    printf("圆的面积为：%f\n", area);

    return 0;
}
