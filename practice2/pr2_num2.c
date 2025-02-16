#include <stdio.h>

struct Item{
    char name[50];
    int num;
    float price;
};

int main()
{
    int n;
    printf("Введите кол-во видов товара:\n");
    scanf("%d", &n);
    struct Item item[n];
    for (int i = 0; i < n; i++){
        printf("\nВведите название, кол-во и цену товара:\n");
        scanf("%s %d %f", item[i].name, &item[i].num, &item[i].price);
    }

    for (int i = 0; i < n; i++){
        printf("\nНазвание: %s\nКоличество: %d\nЦена: %.1f\n", item[i].name, item[i].num, item[i].price);
    }

    return 0;
}