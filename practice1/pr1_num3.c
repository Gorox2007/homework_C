#include <stdio.h>
#include <string.h>

int main() {
    printf("Введите символ:\n");
    char ch = getchar();
    char *ptr = strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ", ch);

    if (ptr){
        printf("Символ корректен\n");}
    else{
        printf("Символ не корректен\n");
    }

    return 0;
}