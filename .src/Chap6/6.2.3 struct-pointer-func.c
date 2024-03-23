#include <stdio.h>

// 定义结构体 Person
struct Person {
    int age;
};

// 函数 initializePerson，用于初始化结构体成员变量
// 函数 initializePerson 接受一个指向 Person 结构体的指针 ptr 作为参数
void initializePerson(struct Person *ptr) {
    ptr->age = 30; // 将结构体指针所指向的结构体的年龄设置为30
}

// 主函数
int main() {
    // 声明一个结构体变量 person1
    //struct Person person1;
    struct Person ptr; // 这里声明的结构体变量 ptr 和 函数的参数 ptr 重名也可以

    // 调用 initializePerson 函数，并传递 person1 的地址作为参数
    initializePerson(&ptr);

    // 打印初始化后的成员变量
    printf("Age: %d\n", ptr.age);

    return 0;
}
