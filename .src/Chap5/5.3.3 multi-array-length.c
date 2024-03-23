/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ 多样的数组长度有关的计算                                                                                                    │
  │ OUTPUT：                                                                                                         │
  │ 4                                                                                                               │
  │ 20                                                                                                              │
  │ 5                                                                                                               │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};
    //打印int类型占用的字节数
    int length1 =sizeof(int);
    printf("%d\n", length1);
    //打印数组占用的字节数
    int length2 =sizeof(arr);
    printf("%d\n", length2);
    //打印数组中元素的个数
    int length3 =sizeof(arr) /sizeof(arr[0]);
    printf("%d\n", length3);

    return 0;
}