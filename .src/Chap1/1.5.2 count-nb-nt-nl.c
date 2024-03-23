#include <stdio.h>

int main()
{
    int c, nl, nb, nt;
    nl = 0;
    nb = 0;
    nt = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
    }
    printf("nl = %d, nb = %d, nt = %d\n", nl, nb, nt);
    return 0;
}
