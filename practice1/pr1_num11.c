#include <stdio.h>

int main()
{
    float level;
    printf("Введите уровень кислорода (Например: 0.5 = 50%):\n");
    scanf("%f", &level);
    if (level < 0.15){
        printf("ВНИМАНИЕ, ВКЛЮЧИТЕ АВАРИЙНУЮ СИСТЕМУ\n");
    }
    else{
        printf("Всё хорошо)\n");
    }

    return 0;
}