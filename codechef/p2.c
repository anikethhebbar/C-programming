#include <stdio.h>

int main()
{
    int a, n, i;
    char p[10];
    scanf("%d", &a);
    while (a--)
    {
        scanf("\n%d", &n);
        if (n % 2 == 1)
            printf("-1\n");
        else
        {
            for (i = 0; i < n / 2; i++)
                printf("10");
            printf("\n");
        }
    }
    return 0;
}