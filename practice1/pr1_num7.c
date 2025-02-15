#include <stdio.h>

int main()
{
    float x;
    printf("Введите частоту сигнала (ГГц):\n");
    scanf("%f", &x);
    if (2.5 <= x && x <= 3.5){
        printf("Связь стабильна");
    }
    else{
        printf("Связь нестабильна");
    }

    return 0;
}