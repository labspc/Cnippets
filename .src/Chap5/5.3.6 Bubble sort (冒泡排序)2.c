// Bubble sort (冒泡排序)2
#include <stdio.h>

void bubble_sort( int arr[] ,  int length ) {   
//      /*int arr[] 形式上是数组，实际上是指针*/
//确定需要几次冒泡
// int length=sizeof(arr)/sizeof(arr[0]);  
//内部求解长度不可行, 在外部求解完之后再进函数

int i=0;

for (i=0; i<length-1; i++){  //length-1 趟
    
    int j=0; //下标
    for (j=0; j<  length-i-1    ; j++)  {
        if (arr[j] > arr[j+1] )  // 两对数之间进行比较，没进去一趟对数-1 
    {
        /* 交换 */
        int Tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = Tmp;
    }
    }

    }
  
}

int main() {
    int arr[] = {5, 2, 1, 4, 3, 0}; //arr是数组名
    int length=sizeof(arr)/sizeof(arr[0]); //length是数组的长度
    bubble_sort(arr, length);  //这一步就在调用函数 bubble_sort()，把上面两个“变量”作为参数传给函数

    int i=0;
    for ( i = 0; i < length; i++) {
        printf("%d", arr[i]);
    }

    

    return 0;
}