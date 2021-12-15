#include <stdio.h>
struct SolarSystem
{
    char name[30];
    int distance;
    int moons;
} planet[8];

void main()
{
    int i, max_moons, pos;
    printf("\nEnter planets records: \n");
    for (i = 0; i < 8; i++)
    {
        printf("\nEnter the name of the planet: ");
        scanf("%s", planet[i].name);
        printf("\nEnter the distance of the planet from sun: ");
        scanf("%d", &planet[i].distance);
        printf("\nEnter the number of moons for planet: ");
        scanf("%d", &planet[i].moons);
    }
    printf("\nPlanets records: \n");
    printf("\n---------------------------------------");
    printf("\nName\tDistance\tMoon");
    printf("\n---------------------------------------");
    for (i = 0; i < 8; i++)
    {
        printf("\n%s\t%d\t%d", planet[i].name, planet[i].distance, planet[i].moons);
    }
    max_moons = planet[0].moons;
    pos = 0;
    for (i = 0; i < 8; i++)
    {
        if (planet[i].moons > max_moons)
        {
            max_moons = planet[i].moons;
            pos = i;
        }
    }
    printf("\nThe planet having highest number of moons is %s", planet[pos].name);
}
