#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int alphabet(const void* a, const void* b){
    return strcmp(*(const char **)a, *(const char **)b);
}



int len_cmp(const void* a, const void* b){
    return strlen(*(const char **)a) - strlen(*(const char **)b);
}



int a_count(char* str){
    int count = 0;
    for (int i = 0; i < strlen(str); i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||  str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){
            count++;
        }
    }
    return count;
}



int a_cmp(const void* a, const void* b){
    return a_count(*(const char **)a) - a_count(*(const char **)b);
}






int main() {
    printf("Сколько строк будет введено?\n");
    int str_num;
    scanf("%d", &str_num);
    printf("Вводите строки (до 100 символов)\n");
    char* strs[str_num];
    char s[100];
    for (int i = 0; i < str_num; i++){
        scanf("%s", &s);
        strs[i] = strdup(s);
    }
    
    printf("\nВведите режим сортировки (алфавит, длина, гласные):\n");
    scanf("%s", &s);
    printf("\n");
    int (*func)(const void*, const void*);
    if (strcmp(s, "алфавит") == 0) func = alphabet;
    else if (strcmp(s, "длина") == 0) func = len_cmp;
    else if (strcmp(s, "гласные") == 0) func = a_cmp;
    else return 0;

    qsort(strs, str_num, sizeof(char*), func);
    for (int i = 0; i < str_num; i++){
        printf("%s\n", strs[i]);
    }




    return 0;
}