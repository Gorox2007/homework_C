#include <stdio.h>

int main()
{
    int t;
    printf("Введите температуру:\n");
    scanf("%d", &t);
    if (t >= -150 && t <= 120){
        printf("Температура в норме\n");
    }
    else{
        printf("ТЕМПЕРАТУРА НЕ В НОРМЕ\n");
    }

    return 0;
}