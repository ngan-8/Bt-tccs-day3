#include <stdio.h>
struct addition {
    int num1;
    int num2;
    int sum;
};

int main() {
    struct addition add;

    printf("Nhap so thu nhat: ");
    scanf("%d", &add.num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &add.num2);
    add.sum = add.num1 + add.num2;
    printf("Tong cua %d + %d = %d\n", add.num1, add.num2, add.sum);
getchar();
getchar();

    return 0;
}
