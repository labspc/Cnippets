#include <stdio.h>
#include <string.h>

// 定义一个包含姓名和年龄的结构体
struct Person {
    char name[50];
    int age;
};

int main() {
    // 定义一个包含3个人的结构数组
    struct Person people[3];

    // 使用strcpy()将字符串复制到结构体的字符数组成员中
    strcpy(people[0].name, "Alice"); //将字符串 "Alice" 复制到 people[0].name 指向的内存区域
    people[0].age = 25;

    strcpy(people[1].name, "Bob");
    people[1].age = 30;

    strcpy(people[2].name, "Charlie");
    people[2].age = 22;

    // 先遍历结构数组，后打印结构数组中的每个人的信息
    for (int i = 0; i < 3; ++i) {
        printf("Person %d:\n", i+1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("\n");
    }

    return 0;
}

/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ 输出：                                                                                                             │
  │                                                                                                                 │
  │ Person 1:                                                                                                       │
  │ Name: Alice                                                                                                     │
  │ Age: 25                                                                                                         │
  │                                                                                                                 │
  │ Person 2:                                                                                                       │
  │ Name: Bob                                                                                                       │
  │ Age: 30                                                                                                         │
  │                                                                                                                 │
  │ Person 3:                                                                                                       │
  │ Name: Charlie                                                                                                   │
  │ Age: 22                                                                                                         │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
