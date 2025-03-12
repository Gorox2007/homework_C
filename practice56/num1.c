#include <stdio.h>
#include <string.h>

void to_upper(char* s){
    for (int i = 0; i < 100; i++){
        if (s[i] >= 'a' && s[i] <= 'z') s[i] += 'A' - 'a';        
    }
}

void to_lower(char* s){
    for (int i = 0; i < 100; i++){
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] -= 'A' - 'a';        
    }
}

void reverse(char* s){
    int len;
    for (int i = 0; i < 100; i++){
        len = i;
        if (s[i] == '\0') break;     
    }

    for (int i = 0; i < (int)(len/2); i++){
        char x = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = x;
    }
}

struct Command
{
    char* name;
    void (*func)(char*);
};

int main() {

    struct Command commands[] = {
        {"upper", to_upper},
        {"lower", to_lower},
        {"reverse", reverse},
        {NULL, NULL}
    };

    char str[100], command[20];
    while (1){
        printf("Введите команду (upper, lower, reverse, exit): ");
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
    }
    return 0;
}