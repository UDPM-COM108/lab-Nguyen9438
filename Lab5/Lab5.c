#include <stdio.h>

int main() {
    // Bai 1: Tim so lon nhat
    int a, b, c, max;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("So lon nhat la: %d\n\n", max);

    // Bai 2: Kiem tra nam nhuan
    int year;
    printf("Nhap nam: ");
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d la nam nhuan.\n\n", year);
    } else {
        printf("%d khong phai nam nhuan.\n\n", year);
    }


   // Bai 3: Hoan vi 2 so
    int x, y, temp;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y);
    temp = x;
    x = y;
    y = temp;
    printf("Sau khi hoan vi: x = %d, y = %d\n", x, y);

    return 0;
}
