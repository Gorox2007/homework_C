#include <stdio.h>

int main()
{
    double T;
    printf("Ведите время в секундах:\n");
    scanf("%lf", &T);

    printf("%d минут; %.1lf секунд\n", (int)(T/60), T - (int)(T/60)*60);

    return 0;
}