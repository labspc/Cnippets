#include <stdio.h>

int main() {
    int choice;
    printf("请选择一个数字（1-3）：");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("您选择了数字 1。\n");
            break;
        case 2:
            printf("您选择了数字 2。\n");
            break;
        case 3:
            printf("您选择了数字 3。\n");
            break;
        default:
            printf("无效的选择。\n");
            break;
    }

    return 0;
}
