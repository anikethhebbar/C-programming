#include <stdio.h>
typedef struct S
{
    int real;
    int imag;
} S;
void sum(s[], s);
int main()
{
    S s1[5], s2;
    int i;
    printf("Enter a complex no.\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d%d", &s1[i].real, &s1[i].imag);
        sum(s1, s2);
    }
}
void sum(S s1[], s s2)
{
    int i;
    s2.real = s2.imag = 0;
    for (i = 0; i < 5; i++)
    {
        s2.real + = s1[i].real;
        s2.imag + = s2[i].imag;
    }
    printf("result is\n%d + i%d", s2.real, s2.imag);
}