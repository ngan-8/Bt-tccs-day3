#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("  Trong swapByValue: a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5, y = 10;
    printf("== Hoan doi bang gia tri ==\n");
    printf("Truoc khi goi ham: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("Sau khi goi ham:  x = %d, y = %d\n", x, y);
    printf("\n== Hoan doi bang tham chieu ==\n");
    printf("Truoc khi goi ham: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("Sau khi goi ham:  x = %d, y = %d\n", x, y);
    getchar();
    getchar();
    getchar();
    getchar();

    return 0;

}

