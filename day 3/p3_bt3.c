#include <stdio.h>

struct Rectangle {
    float length;
    float width;
    float area;
};

void calculateArea(struct Rectangle *r) {
    r->area = r->length * r->width;
}

int main() {
    struct Rectangle rect;

    printf("Nhap chieu dai: ");
    scanf("%f", &rect.length);
    printf("Nhap chieu rong: ");
    scanf("%f", &rect.width);
    calculateArea(&rect);
    printf("Chieu dai: %.2f\n", rect.length);
    printf("Chieu rong: %.2f\n", rect.width);
    printf("Dien tich: %.2f\n", rect.area);
getchar();
getchar();
    return 0;
}
