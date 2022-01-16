#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        char s[100000000];
        scanf("%s", s);
        int n = strlen(s);
        if (n = 1)
        {
            printf("No\n");
            continue;
        }
        int count = 0, pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
                pos = i + 1;
            }
        }
        if (count == 0 || (count == 1 && pos == n))
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}
