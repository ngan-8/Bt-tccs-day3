#include <stdio.h>

int main() {
    char c = 100;
    printf("Gia tri ban dau cua c: %d\n", c);
    printf("Dia chi cua c: %p\n", (void*)&c);
    char *ptr = &c;
    char data_read = *ptr;
    printf("Du lieu doc tu con tro: %d\n", data_read);
    *ptr = 65;
    printf("Gia tri cua c sau khi ghi qua con tro: %d\n", c);
 getchar();
    return 0;
}
