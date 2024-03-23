#include <stdio.h>


// 定义结构
struct Person
{   char *name;
    //char name[50];
    int age;
    float salary;
};

int main()
{
    // 声明一个结构类型的变量
    struct Person person1;

    // 使用点操作符（.）访问结构中的成员，并为其赋值
    //person1.name = malloc(50 * sizeof(char));
    //strcpy(person1.name, "John");
    person1.name = "John";
    person1.age = 30;
    person1.salary = 2500.50;

    // 打印结构成员的值
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

    return 0;
}
/* 
  ┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
  │ 解释：                                                                                                             │
  │ 如果采用下列写法，用到了一个指向静态字符串的指针，person1.name被定义为指向字符的指针                                                                │
  │ 从而，跳过字符串拷贝，不使用strcpy()函数                                                                                        │
  │ char *name;                                                                                                     │
  │ //char name[50];                                                                                                │
  │ 输出：                                                                                                             │
  │ Name: John                                                                                                      │
  │ Age: 30                                                                                                         │
  │ Salary: 2500.50                                                                                                 │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
