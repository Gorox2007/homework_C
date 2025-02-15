#include <stdio.h>

int main()
{
    int v, M;
    printf("Введите скорость (Кбит) и объём информации (МБ):\n");
    scanf("%d %d", &v, &M);
    printf("Информация будет передана за %.2f минут\n", (float)(M*8000) / v / 60);
    return 0;
}