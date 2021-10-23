#include <stdio.h>
int main()
{
    int speed;
    printf("Enter speed as an integer:");
    scanf("%d", &speed);
    if (speed < 65)
        printf("No speeding ticket\n");
    else
        printf("\nSpeeding ticket\n");
    return 0;
}