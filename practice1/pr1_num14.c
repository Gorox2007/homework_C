#include <stdio.h>

int main()
{
    int w;
    printf("Введите вес объекта\n");
    scanf("%d", &w);
    printf("Вес объекта на луне: %.2f\n", (float)w/6);


    return 0;
}