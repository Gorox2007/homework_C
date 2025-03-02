#include <stdio.h>

void check_fuel(int fuel_level){
    if (fuel_level < 10){
        printf("ВНИМАНИЕ, НИЗКИЙ УРОВЕНЬ ТОПЛИВА\n");
    }
}