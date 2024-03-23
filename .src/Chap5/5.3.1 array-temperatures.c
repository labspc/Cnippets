/*
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ 存在一个问题：只支持整数输入。                                                                                                 │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
#include <stdio.h>

int main()
{
    // 定义一个整数数组来存储一周中每天的温度
    int temperatures[7];

    // 输入每天的温度数据
    for (int i = 0; i < 7; i++)
    {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%d", &temperatures[i]);
    }

    // 打印一周中每天的温度
    printf("Weekly temperatures:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Day %d: %d degrees\n", i + 1, temperatures[i]);
    }

    return 0;
}