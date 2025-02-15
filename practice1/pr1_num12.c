#include <stdio.h>

int main()
{
    int t;
    printf("Введите угол:\n");
    scanf("%d", &t);
    if (-180 <= t && t <= 180){
        printf("Угол в норме\n");
    }
    else{
        printf("УГОЛ НЕ В НОРМЕ\n");
    }

    return 0;
}