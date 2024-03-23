#include <stdio.h>

// 定义学生结构体
struct Student {
    char * name;
    int age;
    float marks;
};
/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ char * name 为什么 name变量不会重复定义?                                                                                   │
  │ 当你创建一个 struct Student 类型的变量时，每个变量都会有自己的 name 成员。                                                                │
  │ 这些 name 成员是独立的，它们可以指向不同的字符串，所以不会出现重复定义的问题。                                                                      │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
int main() {
    // 定义包含100个学生的结构数组
    struct Student students[100];
    
    // 对第一个学生的信息进行赋值
    students[0].name = "Alice";
    students[0].age = 20;
    students[0].marks = 85.5;

    
    // 对第二个学生的信息进行赋值
    students[1].name = "Bob";
    students[1].age = 22;
    students[1].marks = 78.2;

    // 打印第一个学生的信息
    printf("Student 1:\n");
    printf("Name: %s\n", students[0].name);
    printf("Age: %d\n", students[0].age);
    printf("Marks: %.2f\n", students[0].marks);

    // 打印第二个学生的信息
    printf("\nStudent 2:\n");
    printf("Name: %s\n", students[1].name);
    printf("Age: %d\n", students[1].age);
    printf("Marks: %.2f\n", students[1].marks);

    return 0;
}

/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ 输出：                                                                                                             │
  │                                                                                                                 │
  │ Student 1:
  | Name: Alice
  | Age: 20
  | Marks: 85.50
  | 
  | Student 2:
  | Name: Bob
  | Age: 22
  | Marks: 78.20
  | 
  |                                                                                                     │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */ 
