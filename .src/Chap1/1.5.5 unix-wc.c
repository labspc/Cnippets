#include <stdio.h>

#define IN 1
#define OUT 0

int main() 
{
    //Declare variables to store the number of newlines, words, and characters
    int c, nl, nw, nc, state;
    //Initialize the state to OUT
    state = OUT;
    //Initialize the values of nl, nw, and nc to 0
    nl = nw = nc = 0;
    //Read each character from the input
    while ((c = getchar()) != EOF) 
    {
        //Increment the number of characters
        ++nc;
        //If the character is a newline, increment the number of newlines
        if (c == '\n') 
        {
            ++nl;
        }
        //If the character is a space, newline, or tab, set the state to OUT
        if (c == ' ' || c == '\n' || c == '\t') 
        {
            state = OUT;
        }
        //Otherwise, if the state is OUT, set the state to IN and increment the number of words
        else if (state == OUT) 
        {
            state = IN;
            ++nw;
        }
    }
    //Print the number of newlines, words, and characters
    printf("%d %d %d\n", nl, nw, nc);
    return 0;
}
