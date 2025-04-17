#include <stdio.h>
struct User {
    char fullName[100];
    int age;
    char gender[10];
    char city[50];
    char postalCode[20];
    char maritalStatus[20];
    float salary;
};
int main() {
    struct User user;
    printf("Nhap ho ten: ");
    fgets(user.fullName, sizeof(user.fullName), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &user.age);
    getchar();
    printf("Nhap gioi tinh: ");
    fgets(user.gender, sizeof(user.gender), stdin);
    printf("Nhap thanh pho: ");
    fgets(user.city, sizeof(user.city), stdin);
    printf("Nhap ma buu dien: ");
    fgets(user.postalCode, sizeof(user.postalCode), stdin);
    printf("Nhap tinh trang hon nhan: ");
    fgets(user.maritalStatus, sizeof(user.maritalStatus), stdin);
    printf("Nhap muc luong: ");
    scanf("%f", &user.salary);
    printf("\n===== THONG TIN DANG KY =====\n");
    printf("Ho ten: %s", user.fullName);
    printf("Tuoi: %d\n", user.age);
    printf("Gioi tinh: %s", user.gender);
    printf("Thanh pho: %s", user.city);
    printf("Ma buu dien: %s", user.postalCode);
    printf("Tinh trang hon nhan: %s", user.maritalStatus);
    printf("Muc luong: %.2f\n", user.salary);
getchar();
getchar();
    return 0;
}
