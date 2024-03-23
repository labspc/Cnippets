#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 定义结构
struct Person
{   //char *name;
    char name[50];
    int age;
    float salary;
};

int main()
{
    // 声明一个结构类型的变量
    struct Person person1;

    // 使用点操作符（.）访问结构中的成员，并为其赋值
    //person1.name = malloc(50 * sizeof(char));
    //char *name = malloc(50 * sizeof(char));
    char *name = "John";
    strcpy(person1.name, "John");
    //person1.name = "John";
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
  │ 如果 person1.name 是一个字符数组（例如 char name[50]），那么您不能将 malloc 返回的地址赋值给它。                                                                                       │
  │ char *name;                                                                                                     │
  │ //char name[50];  数组类型是不能被赋值的。
  | 强行调试会产生一个 error： array type 'char[50]' is not assignable 
  | 由此，还可以不改变char[50]数组，而直接使用char *name进行 malloc      
  | 最后，这一版的debug，并没有分配内存，程序还是成功编译，不得其解                                                                                    │
  │ 输出：                                                                                                             │
  │ Name: John                                                                                                      │
  │ Age: 30                                                                                                         │
  │ Salary: 2500.50                                                                                                 │
  └─────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
 */
