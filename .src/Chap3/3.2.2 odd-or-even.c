// 判断一个数是否为奇数
// 核心逻辑在：num % 2 == 1   除以2的余数是否为1
#include <stdio.h>
int main(void) 
{


    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);
    if (num % 2 == 1)
        printf("%d是奇数\n", num);
    else
        printf("%d是偶数\n", num);
    return 0;
}
