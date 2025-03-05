#include <stdio.h>
#include <string.h>

int main()
{
    char old[200];
    scanf("%s", &old);
    char *new = strdup(old);

    printf("Оригинал: %s\nКопия: %s\n", old, new);

    return 0;
}