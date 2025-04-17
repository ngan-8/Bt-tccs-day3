#include <stdio.h>
void sumAndProduct(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int x = 8, y = 5;
    int tong, tich;

    sumAndProduct(x, y, &tong, &tich);

    printf("Tong cua %d va %d la: %d\n", x, y, tong);
    printf("Tich cua %d va %d la: %d\n", x, y, tich);
  getchar();
    return 0;
}


