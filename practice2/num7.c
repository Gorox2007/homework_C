#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n;
    printf("Введите кол-во студентов: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Введите данные о студенте %d (имя, возраст, GPA): ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        struct Student* s = &students[i];
        printf("\nСтудент %d:\n", i + 1);
        printf("  Имя: %s\n  Возраст: %d\n  GPA: %.1f\n", s->name, s->age, s->gpa);
    }

    return 0;
}