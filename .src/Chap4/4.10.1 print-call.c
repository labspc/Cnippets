#include <stdio.h>

// 定义一个函数   unsigned int n   无符号整型

void Print(unsigned int n)
{

    if (n > 9)
    {
        Print(n / 10);
    }
    printf("%u ", n % 10); // 打印末尾   /n 进行换行  可有可无
}
// 默认测试：20231031
int main(void)
{
    unsigned int num = 0;
    scanf("%u", &num);
    // Print(num);

    Print(num);
    return 0;
}