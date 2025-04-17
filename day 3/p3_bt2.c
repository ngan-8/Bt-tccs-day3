#include <stdio.h>
struct Rectangle {
    float length;
    float width;
    float area;
};

int main() {
    struct Rectangle rect;
    printf("Nhap chieu dai: ");
    scanf("%f", &rect.length);

    printf("Nhap chieu rong: ");
    scanf("%f", &rect.width);

    rect.area = rect.length * rect.width;

    printf("Dien tich hinh chu nhat = %.2f\n", rect.area);
getchar();
getchar();
    return 0;
}
