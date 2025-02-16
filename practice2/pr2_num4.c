#include <stdio.h>

struct Employee{
    char name[50];
    char pos[50];
    float sal;
};

int main()
{
    int n;
    printf("Введите кол-во сотрудников:\n");
    scanf("%d", &n);
    struct Employee emp[n];
    for (int i = 0; i < n; i++){
        printf("\nВведите имя, должность и зарплату сотрудника:\n");
        scanf("%s %s %f", emp[i].name, emp[i].pos, &emp[i].sal);
    }

    for (int i = 0; i < n; i++){
        printf("\nName: %s\nPosition: %s\nSalary: %.2f\n", emp[i].name, emp[i].pos, emp[i].sal);
    }

    return 0;
}