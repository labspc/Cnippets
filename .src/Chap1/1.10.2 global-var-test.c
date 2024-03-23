#include <stdio.h>

int eg1 = 2; //定义全局变量 eg1


void test()
{
    printf("test-->%d\n", eg1); //test--> 显示的内容
    
}
// 自己写一个test函数，void是函数的返回类型



int main()
{
    test(); //调用 test()
    //printf("test-->%d\n", eg1); eg1=2 这是第一遍
    
    {
        printf("eg1=%d\n", eg1); //打印 第二遍
    }
    
    printf("eg1=%d\n", eg1); //打印 第三遍
    
    return 0;
}
