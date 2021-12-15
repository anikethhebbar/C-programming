#include <stdio.h>
int stack[MAX];
int top = -1;

void palindrome()
{
    int i, count = 0;
    for (i = 0; i <= (top / 2); i++)
    {
        if (stack[i] == stack[top - i])
            count++;
    }
    if ((top / 2 + 1) == count)
        printf("\n Stack contents are Palindrome");
    else
        printf("\nStack contents are not palindrome");
}
