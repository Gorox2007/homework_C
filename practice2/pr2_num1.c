#include <stdio.h>

struct Student{
    char name[50];
    int age;
    float gpa;
};

int main()
{
    int n;
    printf("Введите кол-во учеников:\n");
    scanf("%d", &n);
    struct Student student[n];
    for (int i = 0; i < n; i++){
        printf("\nВведите имя, возраст и средний балл:\n");
        scanf("%s %d %f", student[i].name, &student[i].age, &student[i].gpa);
    }

    for (int i = 0; i < n; i++){
        printf("\nИмя: %s\nВозраст: %d\nСредний балл: %.1f\n", student[i].name, student[i].age, student[i].gpa);
    }

    return 0;
}