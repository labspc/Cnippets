#include <stdio.h>
#define MAXLINE 100

int get_line(char line[], int maxline);
void reverse(char s[]);

int main()
{
    char line[MAXLINE]; 

    while (get_line(line, MAXLINE) > 0) 
    {
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char s[])
{
    int i, j;
    char temp;

    i = 0;
    while (s[i] != '\0') 
        ++i;
    --i; //可以在循环中用于逆序遍历数组或字符串
    if (s[i] == '\n') 
        --i;

    j = 0; //用于表示字符串的起始位置
    while (j < i)
    {
        //交换
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}