#include <stdio.h>
#define MAXHORI 15 // horizontal histogram
#define MAXWORD 11
#define IN 1
#define OUT 0

int main()
{
    int c, i, nc, state;
    int len; // length of each bar in histogram
    int maxvalue; // maximum value for wl[]
    int ovflow; // number of overflow words
    int wl[MAXWORD]; // word length counters
    state = OUT;
    nc = 0; // number of chars in a word
    ovflow = 0;

    // initialize wl[]
    for (i = 0; i < MAXWORD; ++i)
    {
        wl[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            if (nc > 0)
            {
                if (nc < MAXWORD)
                {
                    ++wl[nc];
                }
                else
                {
                    ++ovflow; // overflow words
                }
            }
            nc = 0;
        }
        else if (state == OUT)
        {
            state = IN;
            nc = 1;
        }
        else
        {
            ++nc; // inside a word 正在读取一个单词的内部
        }
    }

    maxvalue = 0;
    // 过找出最大值，我们可以确定直方图的高度，使得直方图的高度与最长的单词的长度相对应
    for (i = 1; i < MAXWORD; ++i)
    {
        if (wl[i] > maxvalue)
        {
            maxvalue = wl[i];
        }
    }

    for (i = 1; i < MAXWORD; ++i)
    {
        printf("%5d - %5d : ", i, wl[i]);
        if (wl[i] > 0)
        {
            if ((len = wl[i] * MAXHORI / maxvalue) <= 0)
            {
                len = 1;
            }
        }
        else
        {
            len = 0;
        }

        while (len > 0)
        {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
    if (ovflow > 0)
    {
        printf("There are %d words >= %d\n", ovflow, MAXWORD);
    }
    return 0;
}
