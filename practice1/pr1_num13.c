#include <stdio.h>

int main()
{
    int N;
    printf("Введите кол-во человек:\n");
    scanf("%d", &N);
    if (N % 2 == 0){
        printf("Людей можно доставить на станцию без остатка\n");
    }
    else{
        printf("Людей нельзя доставить на станцию без остатка\n");
    }

    return 0;
}