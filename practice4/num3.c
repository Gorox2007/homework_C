#include <stdio.h>
#include <string.h>


int main()
{
    char str[] = "Гагарин;Титов;Армстронг;Коллинз;Олдрин";
    char* name = strtok(str, ";");
    while(name){
        printf("%s\n", name);
        name = strtok(NULL, ";");
    }
    
    
    return 0;
}