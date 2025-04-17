#include <stdio.h>
#include "p2_bt3math.h"

int main(void)
{
    int a = 16, b = 4;

    printf("Cong: %d + %d = %d\n", a, b, cong(a, b));
    printf("Tru: %d - %d = %d\n", a, b, tru(a, b));
    printf("Nhan: %d * %d = %d\n", a, b, nhan(a, b));
    printf("Chia: %d / %d = %.2f\n", a, b, chia(a, b));

    getchar();
    return 0;
}
