#include <stdio.h>
#include <time.h>
 
int main(void)
{
    time_t mytime = time(NULL);
    struct tm *now = localtime(&mytime);
    int mydate = (now->tm_year + 1900)*10000 + (now->tm_mon + 1)*100 + now->tm_mday;

    int code;
    printf("Введите дату старта миссии\n");
    scanf("%d", &code);

    if (code > mydate){
        printf("Миссия запланирована на будущее\n");
    }
    else{
        printf("Миссия уже состоялась\n");
    }

    return 0;
}