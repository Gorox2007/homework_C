#include <stdio.h>

enum EngineType {
    Gasoline, 
    Diesel, 
    Electric
};

struct Vehicle {
    char brand[50];
    char model[50];
    int year;
    enum EngineType engine;
};

int main() {
    int n;
    printf("Введите количество транспортных средств: ");
    scanf("%d", &n);
    
    struct Vehicle vehicles[n];

    for (int i = 0; i < n; i++) {
        printf("Введите данные для транспортного средства %d (марка, модель, год, тип двигателя (0 - Gasoline, 1 - Diesel, 2 - Electric)): ", i + 1);
        scanf("%s %s %d %d", vehicles[i].brand, vehicles[i].model, &vehicles[i].year, &vehicles[i].engine);
    }

    for (int i = 0; i < n; i++) {
        printf("\nТранспортное средство: %s %s\n", vehicles[i].brand, vehicles[i].model);
        printf("Год выпуска: %d\n", vehicles[i].year);
        
        switch (vehicles[i].engine) {
            case Gasoline:
                printf("Тип двигателя: Gasoline\n");
                break;
            case Diesel:
                printf("Тип двигателя: Diesel\n");
                break;
            case Electric:
                printf("Тип двигателя: Electric\n");
                break;
            default:
                printf("Неизвестный тип двигателя\n");
        }
    }

    return 0;
}