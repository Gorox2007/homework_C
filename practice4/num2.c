#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char signal[] = "$$$$$Привет, Сириусяне!$$$$$$$$$$";
    char symbols[] = "$*";
    size_t start = strspn(signal, symbols);
    size_t length = strcspn(signal + start, symbols);
    char* message = strndup(signal + start, length);
    printf("%s\n", message);




    free(message);
    return 0;
}