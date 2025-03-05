#include <stdio.h>
#include <string.h>


int main() {
    char cor_code[] = "launch-2025";
    char code[20];
    fgets(code, sizeof(code), stdin);
    code[strcspn(code, "\n")] = 0;

    if (strcasecmp(cor_code, code) == 0) printf("Код принят\n");
    else printf("Ошибка: неверный код!\n");


    return 0;
}