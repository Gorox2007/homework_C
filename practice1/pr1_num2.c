#include <stdio.h>

int main() {
    int w;
    printf("Введите расстояние:\n");
    scanf("%d", &w);

    if (w >= 500){
        printf("Вы не доберётесь до станции\n");}
    else{
        printf("Вы доберётесь до станции\n");}

    return 0;
}