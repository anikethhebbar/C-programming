#include<stdio.h>
int main()
{
    int speed;
    printf("\nEnter speed as an integer:");
    scanf("%d", &speed);
    if (speed < 65)
        printf("\nNo speeding ticket\n");
    else
        printf("\nSpeeding ticket\n");
        return 0;
}