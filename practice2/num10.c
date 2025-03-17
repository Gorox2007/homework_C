#include <stdio.h>

struct Course {
    char name[50];
    int credits;
    char professor[50];
};

int main() {
    int n;
    printf("Введите количество курсов: ");
    scanf("%d", &n);

    struct Course courses[n];

    for (int i = 0; i < n; i++) {
        printf("Введите данные для курса %d (название, кредиты, преподаватель): ", i + 1);
        scanf("%s %d %s", courses[i].name, &courses[i].credits, courses[i].professor);
    }

    for (int i = 0; i < n; i++) {
        printf("\nКурс %d:\n", i + 1);
        printf("  Название: %s\n", courses[i].name);
        printf("  Кредиты: %d\n", courses[i].credits);
        printf("  Преподаватель: %s\n", courses[i].professor);
    }

    return 0;
}