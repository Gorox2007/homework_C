#include <stdio.h>

union Grade {
    int numeric;
    char letter;
};

int main() {
    int n;
    printf("Введите количество оценок: ");
    scanf("%d", &n);

    union Grade grades[n];

    for (int i = 0; i < n; i++) {
        int type;
        printf("Введите тип оценки для оценки %d (1 - числовая, 2 - буквенная): ", i + 1);
        scanf("%d", &type);

        if (type == 1) {
            printf("Введите числовую оценку: ");
            scanf("%d", &grades[i].numeric);
            printf("Числовая оценка: %d\n", grades[i].numeric);
        } else if (type == 2) {
            printf("Введите буквенную оценку: ");
            scanf(" %c", &grades[i].letter);
            printf("Буквенная оценка: %c\n", grades[i].letter);
        } else {
            printf("Неверный тип оценки!\n");
        }
    }

    return 0;
}