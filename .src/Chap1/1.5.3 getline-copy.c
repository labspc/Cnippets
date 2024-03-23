#include <stdio.h>

#define NONEBLANK 'a'

int main() 
{
    // 定义变量c和last
    int c, last;
    // 将last赋值为NONEBLANK
    last = NONEBLANK;
    // 循环读取字符
    while ((c = getchar()) != EOF)
    {
        // 如果当前字符不是空格
        if (c != ' ')
            // 将当前字符打印出来
            putchar(c);
        // 如果当前字符是空格
        else if (last != ' ')
            // 将当前字符打印出来
            putchar(c);
        // 将当前字符赋值给last
        last = c;
    }
    // 返回0
    return 0;
}

