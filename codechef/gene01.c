#include <stdio.h>
int main()
{
    char a, b;

    scanf("%c%c\n", &a, &b);

    if (a == 'R' | b == 'R')
    {
        printf("R");
    }
    else
    {
        if (a == 'B' | b == 'B')
        {
            printf("B");
        }
        else
        {
            printf("G");
        }
    }
    return 0;
}