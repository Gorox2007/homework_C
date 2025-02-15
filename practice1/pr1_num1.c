#include <stdio.h>

int main() {
    int w;
    printf("Введите ваш вес:\n");
    scanf("%d", &w);

    if (w < 60 || w > 90){
        printf("Вы не проходите по весу\n");}
    else{
        printf("Вы проходите по весу\n");}

    return 0;
}