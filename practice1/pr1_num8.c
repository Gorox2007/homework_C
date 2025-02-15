#include <stdio.h>

int main()
{
    printf("Введите вес груза (кг):\n");
    int N;
    scanf("%d", &N);
    if (N % 4 == 0){
        printf("В каждом отсеке должно быть %d кг груза\n", (int)(N/4));
    }
    else{
        printf("Корабль не может перевезти груз\n");
    }

    return 0;
}