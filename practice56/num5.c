#include <stdio.h>
#include <stdlib.h>
#include <string.h>





char** memory;          //Динамическая память
int size;                //Кол-во элементов в памяти
char str[100];          //Массив для принятия строк
int point = 0;          //Указатель на следущий записываемый элемент в память


void alloc(){
    scanf("%d", &size);
    memory = malloc(size * sizeof(char*));
}


void fre(){
    for (int i = 0; i < point; i++){
        free(memory[i]);
    }
    free(memory);
    point = 0;
}


void write(){
    scanf("%s", &str);
    memory[point] = strdup(str);
    point ++;
    
}


void print(){
    for (int i = 0; i < point; i++){
        printf("%s\n", memory[i]);
    }
}





struct Command{
    char* name;
    void (*func)();
};

int main() {
    struct Command commands[] ={
        {"alloc", alloc},
        {"free", fre},
        {"write", write},
        {"print", print},
        {NULL, NULL},
    };

    
    while(1){
        char command[10];
        scanf("%s", command);

        if (strcmp(command, "exit") == 0) break;
        

        int found = 0;
        for (int i = 0; commands[i].name; i++){
            if (strcmp(command, commands[i].name) == 0){
                commands[i].func();
                found = 1;
                break;
            }
        }
        if(!found) printf("Неизвестная команда\n");

    }





    return 0;
}