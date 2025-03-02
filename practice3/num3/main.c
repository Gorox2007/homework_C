#include <stdio.h>
#include "ship.h"

int main()
{
    float speed, time;
    int fuel_level;

    printf("Введите скорость и время:\n");
    scanf("%f %f", &speed, &time);
    calculate_distance(speed, time);

    printf("Введите уровень топлива в процентах:\n");
    scanf("%d", &fuel_level);
    check_fuel(fuel_level);



    return 0;
}