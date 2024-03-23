// Removed unnecessary inclusion of <string.h>
#include <stdio.h>

// 求字符串长度
// int main() {
//  int Length = strlen("Hello");
// printf("%d", Length);
// return 0;
//}

int MyStrlen(char *str) // str：指向字符的指针
{
    // 长度是一个整数
    int Count = 0;
    while (*str != '\0')
    {
        Count++; // 计数器增1
        str++;   // 找下一个字符
    }
    //  *str == '\0'    这里  == 和 =!  的区别
    // =!条件不等才为真，为真进入循环； == 条件相等就为真，刚开始就为真，显然不正确

    return Count;
}

int main()
{

    char arr[] = "Hello";       // 定义一个数组用于存放字符串
    int Length = MyStrlen(arr); // 传的是地址 把数组arr的内容作为地址传给 MyStrlen  char *
    printf("%d", Length);
    return 0;
}
