#include <stdio.h>
int main()
{
    int fahr, cel;
    int lower, upper, step;
    lower = 0;   // 最低温度
    upper = 300; // 最高温度
    step = 20;   // 步长

    fahr = lower;
    while (fahr <= upper)
    {
        cel = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, cel);
        fahr = fahr + step;
    }
    return 0;
}