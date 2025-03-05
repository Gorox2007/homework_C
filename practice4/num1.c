#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char *names[] = {"AAAAA", "GGJUGY", "SSuperMachine", "SSandali"};
    bool f = 0;
    
    for (int i = 0; i < sizeof(names)/sizeof(names[0]); i++){
        if (strncmp(names[i], "SS", 2) == 0){
            printf("%s\n", names[i]);
            f = 1;
            break;
        }
    }
    if (f == 0){
        printf("Не найдено\n");
    }

    return 0;
}