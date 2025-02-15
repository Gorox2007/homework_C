#include <stdio.h>

int main()
{
    float ras, fac;
    printf("Введите рассчётную и фактическую скорости через пробел\n");
    scanf("%f %f", &ras, &fac);
    
    if (ras - fac >= -0.1 && ras - fac <= 0.1){
        printf("Орбита стабильна\n");
    }
    else{
        printf("Орбита нестабильна\n");
    }

    return 0;
}