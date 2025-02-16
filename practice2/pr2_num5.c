#include <stdio.h>

union Data{
    int int_;
    char str_[50];
    float float_;
};

int main()
{
    union Data data;

    int c;
    printf("1 - int; 2 - str; 3 - float:\n");
    scanf("%d", &c);
    printf("Введите данные:\n");
    switch(c){
        case 1:
            scanf("%d", &data.int_);
            printf("Integer: %d\n", data.int_);
            break;
        case 2:
            scanf("%s", data.str_);
            printf("String: %s\n", data.str_);
            break;
        case 3:
            scanf("%f", &data.float_);
            printf("Float: %f\n", data.float_);
            break;
    }


    return 0;
}