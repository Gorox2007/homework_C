#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void del_spaces(char* s){
    for (int i = 0; i < strlen(s); i++){
        if (s[i] == ' '){
            for (int j = i; j < strlen(s); j++){
                s[j] = s[j+1];
            }
            i--;
        }
    }
}

void stars(char* s){
    for (int i = 0; i < strlen(s); i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||  s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
            s[i] = '*';
        }
    }
}

void inverse(char* s){
    for (int i = 0; i < strlen(s); i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] -= 'A' - 'a';
        }
        else if (s[i] >= 'a' && s[i] <= 'z'){
            s[i] += 'A' - 'a';
        }   
    }
}

struct Command
{
    char* name;
    void (*func)(char*);
};

int main() {

    struct Command commands[] = {
        {"delspaces", del_spaces},
        {"stars", stars},
        {"inverse", inverse},
        {NULL, NULL}
    };

    char command[20];
    char* str;
    while (1){
        str = malloc(100*sizeof(char));
        printf("Введите команду (delspaces, stars, inverse, exit): ");
        scanf("%s", command);
        if (strcmp(command, "exit") == 0) break;
        printf("Введите строку: ");
        scanf(" %99[^\n]", str);
        int found = 0;
        for (int i = 0; commands[i].name; i++) {
            if (strcmp(commands[i].name, command) == 0) {
                commands[i].func(str);
                printf("Peзyльтат: %s\n", str);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("Неизвестная команда!\n");

        
        free(str);
    }


    
    return 0;
}