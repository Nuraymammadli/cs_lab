
#include <stdio.h>

int main()
{
    float runner1Coord, runner1Step, runner2Coord, runner2Step;

    scanf("%f %f %f %f", &runner1Coord, &runner1Step, &runner2Coord, &runner2Step);

    if (runner1Coord < runner2Coord)
    {
        if (runner1Step <= runner2Step)
        {
            printf("NEVER\n");
            return 0;
        }
        float time = (runner2Coord - runner1Coord) / (runner1Step - runner2Step);
        printf("%.2f %.2f\n", runner1Coord + runner1Step * time, time);
    }
    else
    {
        if (runner2Step <= runner1Step)
        {
            printf("NEVER\n");
            return 0;
        }
        float time = (runner1Coord - runner2Coord) / (runner2Step - runner1Step);
        printf("%.2f %.2f\n", runner2Coord + runner2Step * time, time);
    }

    return 0;
}
