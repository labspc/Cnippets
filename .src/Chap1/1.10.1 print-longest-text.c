#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int max;               // 当前的最大行长度
char line[MAXLINE];    // 当前的输入行
char longest[MAXLINE]; // 用于保存最长的行

// ANSI C 要使用 void 显式声明函数的参数表为空
int get_line(void);
void copy(void);

int get_line(void)
{
    int c, i; // c 用于接收输入的字符，i 用于记录当前行的长度
    extern char line[]; // 其实这里是多余的，
    // MAXLINE - 1 保留一个位置给字符串的结束字符 '\0'
    // c != EOF 保证输入的字符不是文件结束符&不是换行符
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

void copy(void)
{
    int i;
    extern char line[], longest[]; // 其实这里是多余的，
    i = 0;
    while ((longest[i] = line[i]) != '\0') // 复制最长的行
        ++i;
}

int main()
{
    int len; 
    // main 外部变量声明
    extern int max;
    // get_line、copy 函数在使用外部变量前，要先知道外部变量的名字，所以要先声明
    extern char longest[];
    max = 0;
    while ((len = get_line()) > 0)
        if (len > max)
        {
            max = len;
            copy();
        }

    if (max > 0) /* there was a line */
        printf("%s", longest);

    return 0;
}
