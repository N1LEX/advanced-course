#include <stdio.h>
#include <string.h>

#define SIZEARR(x) (sizeof(x) / sizeof(x[0]))

// Функция распечатывает числовые массивы
void printNumArray(void * array, size_t num, char type)
{
    switch (type) {
        case 'i':
            for(unsigned ctr = 0; ctr < num; ctr++)
                printf("%d ", ((int *)array)[ctr]);
            break;
        case 'l':
            for(unsigned ctr = 0; ctr < num; ctr++)
                printf("%lld ", ((long long *)array)[ctr]);
            break;
        case 'f':
            for(unsigned ctr = 0; ctr < num; ctr++)
                printf("%.2f ", ((float *)array)[ctr]);
            break;
        case 'd':
            for(unsigned ctr = 0; ctr < num; ctr++)
                printf("%.2lf ", ((double *)array)[ctr]);
            break;
        default:
            printf("%s", "Incorrect type. Available: ['i', 'l', 'f', 'd']");
    }
    putchar('\n');
}

int main()
{
    double dAccount[] = {1.3, 2.2, 3, 4, 5, 6, 7};
    float fAccount[] = {12.3, 2.2, 3.7, 4.5, 5.454, 6.477, 7.12};
    int iAccount[] = {1, 2, 3, 4, 5, 6, 7};
    printNumArray(iAccount, SIZEARR(iAccount), 'i');
    printNumArray(dAccount, SIZEARR(dAccount), 'd');
    printNumArray(fAccount, SIZEARR(fAccount), 'f');
    return 0;
}
