#include <stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Event{
    char name[50];
    struct Date date;
    char desc[50];
};

int main()
{
    int n;
    printf("Введите кол-во событий:\n");
    scanf("%d", &n);
    struct Event event[n];
    for (int i = 0; i < n; i++){
        printf("\nВведите название, день, месяц, год и описание события:\n");
        scanf("%s %d %d %d %s", event[i].name, &event[i].date.day, &event[i].date.month, &event[i].date.year, event[i].desc);
    }

    for (int i = 0; i < n; i++){
        printf("\nEvent: %s\nDate: %d/%d/%d\nDescription: %s\n", event[i].name, event[i].date.day, event[i].date.month, event[i].date.year, event[i].desc);
    }

    return 0;
}