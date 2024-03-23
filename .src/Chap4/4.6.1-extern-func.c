///Users/lambert-m1/Desktop/kr-c/kr-c/keyword-extern.c
extern int eg1;
///Users/lambert-m1/Desktop/kr-c/kr-c/basic-function.c
extern int sum(int a, int b);

#include <stdio.h> 
int main() 
{
    printf("%d\n", eg1);

    int s1 = 0; //初始化变量
    int s2 = 0;
    scanf("%d %d", &s1, &s2); //输入两个值存起来
    int Res = sum(s1, s2);  //求和借助 Res函数 就是结果的意思   s1,s2 就是输入的两个数，sum的实质是相加两个数
    // sum()的值就是最终 上述c的值 这时sum()把存的c值，赋值/传给 Res

    printf("%d\n", Res); //输出结果

    return 0;
}

