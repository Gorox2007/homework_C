#include <stdio.h>

enum Condition { Sunny, Cloudy, Rainy };

struct Weather {
    float temperature;
    float humidity;
    enum Condition condition;
};

int main() {
    struct Weather w;

    printf("Введите температуру, влажность и условие (0 - Солнечно, 1 - Облачно, 2 - Дождливо): ");
    scanf("%f %f %d", &w.temperature, &w.humidity, &w.condition);

    printf("\nПогодные данные:\n");
    printf("Температура: %.1f°C\n", w.temperature);
    printf("Влажность: %.1f%%\n", w.humidity);
    printf("Условия: ");

    switch (w.condition) {
        case Sunny: 
            printf("Солнечно\n");
            break;
        case Cloudy:
            printf("Облачно\n");
            break;
        case Rainy:
            printf("Дождливо\n");
            break;
        default:
            printf("Неизвестно\n");
            break;
    }

    return 0;
}