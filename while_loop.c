#include<stdio.h>
int main(void)
{
    int repeat = 0;
    printf("How Much do you miss me?(1-10):");
    scanf("%d", &repeat);
    printf("\nI love you very");
    while (repeat > 0)
    {
        printf("\nvery");
        repeat -- ;
    }
    printf(" much, and I miss you too!\n\n");
    return 0;
}