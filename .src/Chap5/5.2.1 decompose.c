#include <stdio.h>
//指针作为函数参数
void decompose(double x, long *int_part, double *frac_part)
{
    *int_part = (long)x;
    *frac_part = x - *int_part;
}

    double x = 3.14159265358979323846;
    long int_part;
    double frac_part;

int main()
{
    // 调用函数
    decompose(x, &int_part, &frac_part);
    // 输出结果
    printf("整数部分: %ld\n", int_part);
    printf("小数部分: %f\n", frac_part);

    return 0;
}
