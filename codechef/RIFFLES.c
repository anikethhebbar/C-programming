#include <stdio.h>
int t, n, u, k, i, j, l, a[], b[];

int riffle()
{
    i = 0;
    j = 0;
    l = 0;
    for (i = 0; i < n; i++)
    {
        b[i] = a[j];
        j = j + 2;
    }
    l = n / 2;
    i = 1;
    for (u = l; u < n; u++)
    {
        b[u] = a[i];
        i = i + 2;
    }

    for (i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
    return 0;
}

int main()
{

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &n, &k);
        for (i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }

        while (k--)
        {
            riffle();
        }
        for (j = 0; j < n; j++)
        {
            printf("%d ", b[j]);
        }
        printf("\n");
    }
    return 0;
}