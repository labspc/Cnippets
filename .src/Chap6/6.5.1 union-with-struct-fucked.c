#include <stdio.h>
#include <string.h>

// 定义一个结构体
struct Employee {
    int id;
    char name[20];
    char department[30];
    union {
        float salary;
        struct {
            int hours_worked;
            int rate_per_hour;
        } hourly_payment;
    } payment_info;
};

int main() {
    // 定义一个 Employee 结构体变量
    struct Employee emp1;

    // 设置员工信息
    emp1.id = 1001;
    strcpy(emp1.name, "John Doe");
    strcpy(emp1.department, "Engineering");

    // 设置薪资信息（这里使用联合来节省空间）
    emp1.payment_info.salary = 5000.0; // 设置月薪

    // 打印员工信息
    printf("Employee ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Department: %s\n", emp1.department);

    // 利用联合来访问薪资信息
    printf("Salary: $%.2f\n", emp1.payment_info.salary);

    // 如果员工是按时薪支付
    emp1.payment_info.hourly_payment.hours_worked = 40;
    emp1.payment_info.hourly_payment.rate_per_hour = 20;

    printf("Hours Worked: %d\n", emp1.payment_info.hourly_payment.hours_worked);
    printf("Rate per Hour: $%d\n", emp1.payment_info.hourly_payment.rate_per_hour);

    return 0;
}
