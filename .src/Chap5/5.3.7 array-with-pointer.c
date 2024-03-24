#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p;
    int sum = 0;  // 声明并初始化 sum

/* 
  ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │     p=&a[0]：将指针 p 设置为数组 a 的第一个元素的地址                                                                                │
  │     p<=&a[N]：p 的值（也就是地址）小于或等于数组 a 的最后一个元素的地址，循环就会继续                                                                │
  │     p++：这是 for 循环的更新部分。每次循环结束时，p 的值都会增加，使其指向数组的下一个元素。                                                              │                                                                                                         │
  └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
    for (p = &arr[0]; p <= &arr[4]; p++)
    {
        sum += *p; //*p 代表 p 所指向的值
        printf("%d\n", *p);
    }

    // 如果你想打印 sum 的值，可以添加以下代码
    printf("Sum: %d\n", sum);

    return 0;
}
/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ 使得遍历数组循环更加方便                                                                                                    │
  │ 运行～                                                                                                              │
  │ 1                                                                                                               │
  │ 2                                                                                                               │
  │ 3                                                                                                               │
  │ 4                                                                                                               │
  │ 5                                                                                                               │
  │ Sum: 15                                                                                                         │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */


/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │     for (p = &arr[0]; p <= &arr[4]; p++)                                                                            │
  │     {                                                                                                               │
  │         sum += *p;                                                                                                  │
  │         printf("%d\n", *p);                                                                                         │
  │     }                                                                                                               │
  │     改写：                                                                                                             │
  │                                                                                                                     │
  │     p = &arr[0];                                                                                                    │
  │     while (p <= p <= &arr[4])                                                                                       │
  │     {                                                                                                               │
  │         sum += *p++;                                                                                                │
  │     }                                                                                                               │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */